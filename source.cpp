#include <iostream>

class Game {
  public:
    void menu() {
      std::cout << std::endl;
      std::cout << "MIND GAME!   Made by PyLocalDev!" << std::endl;
      std::cout << "This game is simple. Solve The Puzles!" << std::endl;
      std::cout << std::endl;
      std::cout << "Please choose a option :" << std::endl;
      std::cout << "   (S)tart the Game" << std::endl << "   (D)iffeculty" << std::endl << "   (E)xit" << std::endl;
    }
};

int main() {
  Game main;
  main.menu();

  return 0;
}

