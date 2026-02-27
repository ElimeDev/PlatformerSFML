#include "Internal/Input.h"

//Constructeur
Input::Input()
{
    button.left = button.right = button.up = button.down = false;
}

// Fonction qui accede à button (struc) et nous donne l'info private
Input::Button Input::GetButton(void) const
{
    return button;
}

//fonction de gestion des input
void Input::InputHandler(Event event, RenderWindow& window)
{
    if (event.type == Event::Closed)
    {
        window.close();
    }

    //Gestion des input clavier/souris
    //Detection bouton appuyé
    if (event.type == Event::KeyPressed)
    {
        switch (event.key.code)// Code de la touche utilisée
        {
        case Keyboard::Left:
            button.left = true;
            break;
        case Keyboard::Right:
            button.right = true;
            break;
        case Keyboard::Down:
            button.down = true;
            break;
        case Keyboard::Up:
            button.up = true;
            break;
        default:
            break;
        }
    }
    //Detection des boutons relaches
    if (event.type == Event::KeyReleased)
    {
        switch (event.key.code)// Code de la touche utilisée
        {
        case Keyboard::Left:
            button.left = false;
            break;
        case Keyboard::Right:
            button.right = false;
            break;
        case Keyboard::Down:
            button.down = false;
            break;
        case Keyboard::Up:
            button.up = false;
            break;
        default:
            break;
        }
    }
}