#include <iostream>
#include <random>

int main(){
        std::string user1;
        std::cout << "Choose Your Rock, Paper and Scissor: ";
        std::cin >> user1;


            std::random_device rd; // obtain a random number from hardware
            std::mt19937 gen(rd()); // seed the generator
            std::uniform_int_distribution<> distr(1, 3); // define the range

         int random = distr(gen);



        if (user1 == "Rock"){
            if (random == 1){
                std::cout << "Its a tie Your Enemy Choose Rock Too!";
            } else if (random == 2) {
                std::cout << "You Lost Enemy Choose Paper";
            } else {
                std::cout << "You Won Enemy Choose Scissors!";
            }

        }
        if (user1 == "Paper"){
            if (random == 2){
                std::cout << "Its a tie Your Enemy Choose Paper Too!";
            } else if (random == 3) {
                std::cout << "You Lost Enemy Choose Scissors";
            } else {
                std::cout << "You Won Enemy Choose Rock!";
            }

        }
        if (user1 == "Scissor"){
            if (random == 1){
                std::cout << "Its a tie Your Enemy Choose Scissors Too!";
            } else if (random == 1) {
                std::cout << "You Lost Enemy Choose Rock";
            } else {
                std::cout << "You Won Enemy Choose Paper!";
            }

        }



    return 0;

}


/*
1. Rock
2. Paper
3.scissor
*/
