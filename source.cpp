#include <iostream>
#include <strings.h>
#include <cstdlib>

class Game {
  public:
    void menu() {
        system("clear");
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
            this -> diff();
            break;

          case 'e':
            this -> close();
            break;

          default:
            system("clear");
            std::cout << "please choose the option given above." << std::endl;
            break;
        }
      }
    }

    int diff() {
      system("clear");
      char opt;
      std::cout << "Choose difficultity" << std::endl;
      std::cout << "  1) Easy" << std::endl << "  2) Medium" << std::endl << "  3) Hard" << std::endl << "  e) Back" << std::endl;
      std::cout << "Please Choose any option :";
      std::cin >> opt;

      switch(opt) {
        case 'e':
          this -> menu();
          break;

        default:
          std::cout << "Other options will be added soon.";
          break;
      }

      return 0;
    }

    void close() {
      exit(0);
    }
};

int main() {
  Game main;
  main.menu();

  return 0;
}

