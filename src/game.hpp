#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <iostream>

class Game {
public:
  Game(sf::RenderWindow const *window);
  void start();
  
private:
  sf::RenderWindow const *m_window;
};

#endif //GAME_HPP_INCLUDED
