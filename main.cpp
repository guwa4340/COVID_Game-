#include "Game.h"
#include<iostream>

int main(){
    std::cout << "Welcome to the Game of COVID LIFE. You will start the game when you graduate from college in the world of COVID\n You will get to select your job, as well as your house from 3 randomly selected options.\n Over the course of the game your character will have 3 modifiers:\n 1) Lucky\n 2) Depressed\n 3) Addicted to Drugs\n You start as nlegative for all the options, but things will change as the game goes on, and if you become positiive for a certian modifier, it will effect what happens to you in the game\n" << std::endl;
    int np;
    std::cout << "Enter Number of Players in Game" << std::endl;
    std::cin >> np;
    if(np > 5){
        while(np > 5){
            std::cout << "Enter Number of Players in Game, Lower Than 6!" << std::endl;
            std::cin >> np;
        }
    }
    Game g(np);
    std::vector<Player*> ps;
    ps = g.get_players();
    //std::cout << "before loop" << std::endl;
    while(g.is_done() != true){
        for(std::vector<Player*>::iterator it = ps.begin(); it != ps.end(); ++it){
            //std::cout << "in for loop" << std::endl;
            g.take_turn(*it);
            std::cout << "\n" << std::endl;
        }
        g.check_end(np);
    }
    g.final_tally(np);
    return 0;
}