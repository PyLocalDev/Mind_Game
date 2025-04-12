#include <iostream>

class Game {
  public:
    void menu() {
      for(int i = -1; i != 0; i--) {
        std::cout << std::endl;
        std::cout << "MIND GAME!   Made by PyLocalDev!" << std::endl;
        std::cout << "This game is simple. Solve The Puzles!" << std::endl;
        std::cout << std::endl;
        std::cout << "Please choose a option :" << std::endl;
        std::cout << "   (S)tart the Game" << std::endl << "   (D)iffeculty" << std::endl << "   (E)xit" << std::endl;

        char opt;
        std::cout << "Please enter the option and press enter: ";
        std::cin >> opt;

        switch(opt) {
          case 's':
            std::cout << "start" << std::endl;
            break;

          case 'd':
            std::cout << "difficultity" << std::endl;
            break;

          case 'e':
            std::cout << "Exit" << std::endl;
            break;

          default:
            std::cout << "please the option given above." << std::endl;
            break;
        }
      }
    }
};

int main() {
  Game main;
  main.menu();

  return 0;
}

