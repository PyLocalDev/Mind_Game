#include <iostream>
#include <unistd.h>
#include <strings.h>
#include <cstdlib>

//Global Variables
char diff_val;

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
            this -> start(diff_val);
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

    void start(char d) {
      system("clear");
      std::cout << "Your difficultity :";
      char confi;
      
      switch(d) {
        case '1':
          std::cout << "easy" << std::endl;
          break;

        case '2':
          std::cout << "Midium" << std::endl;
          break;

        case '3':
          std::cout << "Hard" << std::endl;
          break;

        default:
          std::cout << "Unknown" << std::endl;
          break;
      }

      std::cout << "Do you want to continue with this difficultity? type [Y,N] and press enter:";
      std::cin >> confi;

      if(confi == 'n' || confi == 'N') {
        this -> menu();
      }

      switch (d) {
        case '1':
            std::cout << "The easy quesions." << std::endl;
            sleep(1);
            system("clear");
            break;

        case '2':
            std::cout << "Kinda Hard questions." << std::endl;
            sleep(1);
            system("clear");

            break;

        case '3':
            std::cout << "The Final Boss." << std::endl;
            sleep(1);
            system("clear");

            break;

        default:
          break;
      }
      
    }

    int diff() {
      system("clear");
      for(int i = 1; i != 0; i++) {
        char opt;
        std::cout << "Choose difficultity" << std::endl;
        std::cout << "  1) Easy" << std::endl << "  2) Medium" << std::endl << "  3) Hard" << std::endl << "  e) Back" << std::endl;
        std::cout << "Please Choose any option :";
        std::cin >> opt;

        switch(opt) {
          case 'e':
            this -> menu();
            break;

          case '1':
            diff_val = '1';
            this -> menu();
            break;

          case '2':
            diff_val = '2';
            this -> menu();
            break;

          case '3':
            diff_val = '3';
            this -> menu();
            break;

          default:
            std::cout << "Please select an option." << std::endl;
            system("clear");
            break;
        }
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

