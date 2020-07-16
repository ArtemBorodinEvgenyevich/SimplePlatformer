//
// Created by artem on 10.07.2020.
//

#include <SFML/Graphics.hpp>
#include "Game.h"

Game::Game() : engine{&player, &m_window}, level{3, 3}
{
    InitWindow();
}

Game::~Game()
{

}


// Private
// -----------------------------------------------------
void Game::InitWindow()
{
    // Setup video mode
    // TODO: Make fullscreen with same resolution and aspect ratio 4:3
    sf::VideoMode videoMode{ 640, 480 };

    // TODO: Maybe less???
    m_window.setFramerateLimit(60);
    m_window.setVerticalSyncEnabled(true);

    // TODO: Change value on different game states. (Maybe add custom cursor?)
    m_window.setMouseCursorVisible(true);

    m_window.create(videoMode, "Simple Platformer");
    m_window.setActive(true);
}


// Public
// -----------------------------------------------------
// TODO: Maybe call in a constructor?
void Game::runGameCycle()
{
    // Game cycle
    while (m_window.isOpen())
    {
        // Processing every pending event
        while (m_window.pollEvent(m_event))
        {
            if (m_event.type == sf::Event::Closed)
                m_window.close();
        }

        // Clear screen from previous frame and display a new rendered frame
        m_window.clear();

        engine.MakeIteration();

//        player.update();
//        player.draw(m_window);

        tile.draw(m_window);

        m_window.display();
    }

}