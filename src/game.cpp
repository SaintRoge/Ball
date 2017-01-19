#include "game.hpp"

Game::Game(sf::RenderWindow const *window) {
  m_window = window;
}

void Game::start() {
  std::cout << "Game started" << std::endl;
}
