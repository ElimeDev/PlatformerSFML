#include "Internal/Game.h"

using namespace sf;

vector<string> explode(string const& s, char delim);

Game::Game(std::string title)
    : m_player(sf::Vector2f(0.f, 0.f), 18),
      m_window(VideoMode(WIN_WIDTH, WIN_HEIGHT), title)
{
	loadMap();
}

Game::~Game()
{
}

void Game::mainloop()
{
    while (m_window.isOpen())
    {
        Event event;
        while (m_window.pollEvent(event))
        {
            m_input.InputHandler(event, m_window);
        }

        float deltaTime = m_clock.restart().asSeconds();

		m_player.update(deltaTime, m_input, m_collisionMap);

        m_window.clear(Color::Black);

        //Draw here
        m_window.draw(m_map);
        m_window.draw(m_player);

        m_window.display();
    }
}

void Game::loadMap()
{
	int levelLoaded[COL_COUNT * ROW_COUNT]; //tableau qui contient la map chargée
	string filename = "data/map/map0";

	//chargement du niveau depuis un fichier texte
	ifstream ifs(filename.c_str());
	string content(istreambuf_iterator<char>(ifs), (istreambuf_iterator<char>()));

	//Decoupe de la chaine en char
	auto exploded = explode(content, ' ');
	//boucler sur chaque char et le convertir en int
	for (size_t i = 0; i < exploded.size(); i++)
	{
		levelLoaded[i] = stoi(exploded[i]);
	}
	if (!m_map.load("assets/tileset/tileset.png", Vector2u(SPRITE_SIZE, SPRITE_SIZE), levelLoaded, COL_COUNT, ROW_COUNT))
		cout << "Erreur lors du chargement de la map." << endl;

	//Met a jour la map de collision
	string filenameCol = "data/map/map0_c";

	//chargement du niveau depuis un fichier texte
	ifstream ifsCol(filenameCol.c_str());
	string contentCol(istreambuf_iterator<char>(ifsCol), (istreambuf_iterator<char>()));

	//Decoupe de la chaine en char
	auto explodedCol = explode(contentCol, ' ');
	//boucler sur chaque char et le convertir en int
	for (size_t i = 0; i < explodedCol.size(); i++)
	{
		m_collisionMap[i] = stoi(explodedCol[i]);
	}
}

//fonction explode
vector<string> explode(string const& s, char delim)
{
    vector<string> result;
    istringstream iss(s);
    for (string token; getline(iss, token, delim); )
    {
        result.push_back(move(token));
    }
    return result;
}