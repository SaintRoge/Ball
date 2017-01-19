#include <SFML/Graphics.hpp>
#include <iostream>
#include "game.hpp"

using namespace sf;

int main(int argc, char* argv[]) {
  RenderWindow *window = new RenderWindow(VideoMode(800, 800), "Ball");
  Game *game;
  Event event;
  while (window->isOpen()) {
    while (window->pollEvent(event)) {
      if (event.type == Event::Closed) {
	window->close();
      }
    }

    if (Keyboard::isKeyPressed(Keyboard::Return)) {
      game = new Game(window);
      game->start();
    }
    
    window->clear();
    window->display();

  }
  return 0;
}
