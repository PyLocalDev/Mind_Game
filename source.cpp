//preprocessors
#include <iostream>
#include <unistd.h>
#include <string>
#include <cstdlib>

//Global Variables
char diff_val;

class Main { // Main structure
  public: // To access the methods
    void menu() { // Main menu
        system("clear");
      for(int i = -1; i != 0; i--) { // Loop if invalid character
        std::cout << std::endl;
        std::cout << "MIND GAME!   Made by PyLocalDev!" << std::endl;
        std::cout << "This game is simple. Solve The Puzles!" << std::endl;
        std::cout << std::endl;
        std::cout << "Please choose a option :" << std::endl;
        std::cout << "   (S)tart the Game" << std::endl << "   (D)iffeculty" << std::endl << "   (E)xit" << std::endl;

        char opt;
        std::cout << "Please enter the option and press enter: ";
        std::cin >> opt;

        switch(opt) { // Gateway
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

    void start(char d) { // Confirmation
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
            this -> easy();
            sleep(1);
            system("clear");
            break;

        case '2':
            this -> medium();
            sleep(1);
            system("clear");

            break;

        case '3':
            this -> hard();
            sleep(1);
            system("clear");

            break;

        default: // Default difficulty
          std::cout << "The difficulty will be set to easy. Do You want to continue? Type [Y,N] And press enter." << std::endl;
          char a;
          std::cin >> a;
          if(a == 'Y' || a == 'y') {
            this -> easy();
          }
          else if (a == 'N' || a == 'n') {
            this -> menu();
          }
          std::cin.ignore();
          break;
      }
      
    }

    void diff() { // Change the difficulty
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
    }

    static void easy() { // Easy difficulty
      int correct = 0;
      int wrong = 0;

      std::cout << "1) What is the capital of Japan? " << std::endl;
      std::cin.ignore();
      std::string quest1;
      std::getline(std::cin, quest1);

      if(quest1 == "tokyo") {
        std::cout << "It's Correct!" << std::endl;
        correct+=1;
      }
      else {
        std::cout << "It's Wrong" << std::endl;
        wrong+=1;
      }

      std::cout << "2) How many days are in a leap year?" << std::endl;
      int quest2;
      std::cin >> quest2;
      std::cin.ignore();

      if(quest2 == 366) {
        std::cout << "It's correct" << std::endl;
        correct+=1;
      }
      else {
        std::cout << "It's Wrong" << std::endl;
        wrong+=1;
      }

      std::cout << "3) Which Gas do plants aborb during the photosynthesis?" << std::endl;
      std::string quest3;
      std::getline(std::cin, quest3);

      if(quest3 == "carbon dioxide") {
        std::cout << "It's correct" << std::endl;
        correct+=1;
      }
      else {
        std::cout << "It's Wrong" << std::endl;
        wrong+=1;
      }

      std::cout << "4) What is the largest ocean on earth?" << std::endl;
      std::string quest4;
      std::getline(std::cin, quest4);

      if(quest4 == "pacific ocean") {
        std::cout << "It's Correct" << std::endl;
        correct+=1;
      }
      else {
        std::cout << "It's Wrong" << std::endl;
        wrong +=1;
      }

      std::cout << "5) Who is the author of Harry Potter?" << std::endl;
      std::string quest5;
      std::getline(std::cin, quest5);

      if(quest5 == "j.k. rowling" || quest5 == "J.K. Rowling") {
        std::cout << "It's Correct!" << std::endl;
        correct+=1;
      }
      else {
        std::cout << "It's Wrong" << std::endl;
        wrong+=1;
      }

      std::cout << "------QUESTIONS ENDED------" << std::endl;
      std::cout << "Guested Correct: " << correct << std::endl;
      std::cout << "Guested Wrong: " << wrong << std::endl;

      std::cout << "Press Enter to continue..."; std::cin.ignore();
    }

    static void medium() { // Medium Difficulty
      int correct = 0;
      int wrong = 0;

      std::cout << "1) Which planet has the most moons in our solar system?" << std::endl;
      std::string quest1;
      std::cin >> quest1;

      if(quest1 == "Saturn" || quest1 == "saturn") {
        std::cout << "It's Correct!" << std::endl;
        correct+=1;
      }
      else {
        std::cout << "It's Wrong!" << std::endl;
        wrong+=1;
      }

      std::cout << "2) In which contry you would find The Great Barrier Reef?" << std::endl;
      std::string quest2;
      std::cin >> quest2;

      if(quest2 == "Australia" || quest2 == "australia") {
        std::cout << "It's Correct" << std::endl;
        correct+=1;
      }
      else {
        std::cout << "It's Wrong" << std::endl;
        wrong+=1;
      }

      std::cout << "3) What is the hardest natural substance on earth?" << std::endl;
      std::string quest3;
      std::cin >> quest3;
      std::cin.ignore();

      if(quest3 == "Diamond" || quest3 == "diamond") {
        std::cout << "It's Correct!" << std::endl;
        correct++;
      }
      else{
        std::cout << "It's Wrong!" << std::endl;
        wrong++;
      }

      std::cout << "4) Which civilization built the pyramids of Giza?" << std::endl;
      std::string quest4;
      std::getline(std::cin, quest4);

      if(quest4 == "Ancient Egyptians" || quest4 == "ancient egyptians") {
        std::cout << "It's correct" << std::endl;
        correct++;
      }
      else {
        std::cout << "It's wwrong" << std::endl;
        wrong++;
      }

      std::cout << "Who composed the Symphony No.9 (Ode To Joy)?" << std::endl;
      std::string quest5;
      std::getline(std::cin, quest5);

      if(quest5 == "Ludwig Van Beethoven" || quest5 == "ludwig van beethoven") {
        std::cout << "It's Correct" << std::endl;
        correct++;
      }
      else {
        std::cout << "It's Wrong" << std::endl;
        wrong++;
      }

      std::cout << "------QUESTIONS ENDED------" << std::endl;
      std::cout << "Guested Correct: " << correct << std::endl;
      std::cout << "Guested Wrong: " << wrong << std::endl;

      std::cout << "Press Enter to continue..."; std::cin.ignore();

    }

    static void hard() {
      int correct = 0;
      int wrong = 0;

      std::cout << "1) What is the term for the study of the origin and history of words?" << std::endl;
      std::string quest1;
      std::getline(std::cin, quest1);

      if(quest1 == "etymology" || quest1 == "Etymology") {
        std::cout << "It's Correct!" << std::endl;
        correct++;
      }
      else {
        std::cout << "It's Wrong" << std::endl;
        wrong++;
      }

      std::cout << "2) Which 13-Century Venetian explorer documented his traves across Asia in the travels of Marco Polo?" << std::endl;
      std::string quest2;
      std::getline(std::cin, quest2);

      if(quest2 == "Marco Polo" || quest2 == "marco polo") {
        std::cout << "It's correct!" << std::endl;
        correct++;
      }
      else {
        std::cout << "It's Wrong!" << std::endl;
        wrong++;
      }

      std::cout << "3) What is the name of the galaxy our solor system belong to?" << std::endl;
      std::string quest3;
      std::getline(std::cin, quest3);

      if(quest3 == "Milky Way" || quest3 == "milky way") {
        std::cout << "It's Correct" << std::endl;
        correct++;
      }
      else {
        wrong++;
      }

      std::cout << "------QUESTIONS ENDED------" << std::endl;
      std::cout << "Guested Correct: " << correct << std::endl;
      std::cout << "Guested Wrong: " << wrong << std::endl;

      std::cout << "Press Enter to continue..."; std::cin.ignore();

    }

    void close() {
      exit(0);
    }
};

int main() {
  Main game;
  game.menu();

  return 0;
}
