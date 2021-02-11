#include "Game.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h> 

Job::Job(){
    title_ = "Job";
    std::vector<int> range { 10000, 20000, 30000 };
    income_range_ = range;
}

Job::Job(std::string t, std::vector<int> ir){
    title_ = t;
    income_range_ = ir;
}

void Job::set_title(std::string t){
    title_ = t;
}

void Job::set_income_range(std::vector<int> ir){
    income_range_ = ir;
}

Unemployment::Unemployment(std::string t, std::vector<int> ir){
    income_ = 30000;
}

void Unemployment::set_title(std::string t){
    title_ = "Unemployed";
}

House::House(){
    rent_ = 10000;
    title_ = "House";
    mortgage_ = 5000;
}

House::House(int r, std::string t, int m){
    rent_ = r;
    title_ = t;
    mortgage_ = m;
}

Player::Player(int i, std::string n){
    id_ = i;
    name_ = n;
    wealth_ = 0;
    is_lucky_ = false;
    is_addict_ = false;
    is_depressed_ = false;
}

void Player::set_job(Job* j){
    job_ = j;
}

void Player::set_income(int i){
    income_ = i;
}

void Player::set_house(House* h){
    house_ = h;
}

void Player::set_wealth(int w){
    wealth_ = w;
}

void Player::display_wealth(){
    std::cout << "Your Total Wealth is: " << get_wealth() << std::endl;
}

void Player::change_position(int p){
    position_ = position_ + p;
}

void Player::set_is_done(bool b){
    is_done_ = b;
}

void Player::set_is_lucky(bool l){
    is_lucky_ = l;
}

void Player::set_is_addict(bool a){
    is_addict_ = a;
}

void Player::set_is_depressed(bool d){
    is_depressed_ = d;
}

Game::Game(int num_players){
    //intitilize players
    std::string name;
    for(int i = 0; i < num_players; i++){
        std::cout << "Enter Name of Player " << i+1 << std::endl;
        std::cin >> name;
        Player *p = new Player(i,name);
        players_.push_back(p);
    //print out players
    }
    std::cout << "Ready For Game With Players:" << std::endl;
    for(int i = 0; i < num_players; i++){
        std::cout << players_[i]->get_name()<< std::endl;
    }
    //intitilize board
    game_map_.push_back("Graduation");
    game_map_.push_back("Payday");
    game_map_.push_back("Get COVID");
    game_map_.push_back("Lucky?");
    game_map_.push_back("Lose Your Job"); 
    game_map_.push_back("Go on a Date");
    game_map_.push_back("Do Drugs");
    game_map_.push_back("Payday");
    game_map_.push_back("Lucky?");
    game_map_.push_back("Stimulus Package!");
    game_map_.push_back("Lose Your Job");
    game_map_.push_back("Do Drugs");
    game_map_.push_back("Payday");
    game_map_.push_back("Lucky?");
    game_map_.push_back("Go on a Date");
    game_map_.push_back("Payday");
    game_map_.push_back("Get COVID");
    game_map_.push_back("Lose Your Job");
    game_map_.push_back("Go on a Date");
    game_map_.push_back("Payday");
    game_map_.push_back("Do Drugs");
    game_map_.push_back("Payday");
    game_map_.push_back("Get COVID");
    game_map_.push_back("Lose Your Job");
    game_map_.push_back("Lucky?");
    game_map_.push_back("Stimulus Package!");
    game_map_.push_back("Payday");
    game_map_.push_back("Get COVID");
    game_map_.push_back("Go on a Date");
    game_map_.push_back("Lose Your Job");
    game_map_.push_back("Payday");
    game_map_.push_back("Do Drugs");
    game_map_.push_back("Lucky?");
    game_map_.push_back("Do Drugs");
    game_map_.push_back("Payday");
    game_map_.push_back("Get COVID");
    game_map_.push_back("Lose Your Job");
    game_map_.push_back("Lucky?");
    game_map_.push_back("Stimulus Package!");
    game_map_.push_back("Payday");
    game_map_.push_back("Get COVID");
    game_map_.push_back("Go on a Date");
    game_map_.push_back("Lose Your Job");
    game_map_.push_back("Payday");
    game_map_.push_back("Do Drugs");
    game_map_.push_back("Lucky?");
    game_map_.push_back("Lottery");
    game_map_.push_back("COVID is Over!");
    //initlilize jobs
    std::vector<int> ir0 {20000,30000,40000};
    Job *j0 = new Job("Taco Bell Cantina",ir0);
    jobs_.push_back(j0);
    std::vector<int> ir1 {50000,60000,70000};
    Job *j1 = new Job("Software Engineer",ir1);
    jobs_.push_back(j1);
    std::vector<int> ir2 {40000,50000,60000};
    Job *j2 = new Job("Doordash",ir2);
    jobs_.push_back(j2);
    std::vector<int> ir3 {100000,110000,120000};
    Job *j3 = new Job("OnlyFans",ir3);
    jobs_.push_back(j3);
    std::vector<int> ir4 {10000,20000,30000};
    Job *j4 = new Job("Owning Construction Company",ir4);
    jobs_.push_back(j4);
    std::vector<int> ir5 {30000,40000,50000};
    Job *j5 = new Job("Lift Operator",ir5);
    jobs_.push_back(j5);
    std::vector<int> ir6 {10000,20000,30000};
    Job *j6 = new Job("Starving Artist",ir6);
    jobs_.push_back(j6);
    std::vector<int> ir7 {50000,60000,70000};
    Job *j7 = new Job("Dog Walker",ir7);
    jobs_.push_back(j7);
    std::vector<int> ir8 {700000,80000,90000};
    Job *j8 = new Job("Nurse",ir8);
    jobs_.push_back(j8);
    std::vector<int> ir9 {60000,70000,10000};
    Job *j9 = new Job("Game Streamer",ir9);
    jobs_.push_back(j9);
    std::vector<int> ir10 {30000,40000,50000};
    Job *j10 = new Job("Masters Program",ir10);
    jobs_.push_back(j10);
    //initilize houses
    House *h0 = new House(0,"Under the Bridge",0);
    houses_.push_back(h0);
    House *h1 = new House(10000,"Tent Outside Liquor Mart",5000);
    houses_.push_back(h1);
    House *h2 = new House(20000,"Spanish Towers",10000);
    houses_.push_back(h2);
    House *h3 = new House(15000,"Room in South Boulder Home",15000);
    houses_.push_back(h3);
    House *h4 = new House(30000,"One Bedroom Loft",5000);
    houses_.push_back(h4);
    std::cout << "---------------------------------------------------------------" << std::endl;
    //Get every player a starting house and a starting job
    for(int i = 0; i < num_players; i++){
        std::cout << std::endl;
        std::cout << players_[i]->get_name() << " time to pick your job!" << std::endl;
        change_job(players_[i]);
        std::cout << "\n" << std::endl;
        std::cout << players_[i]->get_income() << " added to your wealth" << std::endl;
        players_[i]->set_wealth(players_[i]->get_income());
        players_[i]->display_wealth();
        std::cout<<std::endl;
        std::cout << "-------------------------------------------------------------------" << std::endl;
        std::cout << players_[i]->get_name() << ", time to pick your home!" << std::endl;
        change_home(players_[i]);
        std::cout << "-------------------------------------------------------------------" << std::endl;
    }
}
//function to end the game
void Game::game_over(){
    is_done_ = true;
}

void Game::change_job(Player* p){
    //get 3 random jobs
    int r0 = std::rand() % 10;
    int r1 = std::rand() % 10;
    int r2 = std::rand() % 10;
    //output three choices
    std::cout << "Your options for a job are:" << std::endl;
    std::cout << "1: " << jobs_[r0]->get_title() << std::endl;
    std::cout << "2: " << jobs_[r1]->get_title() << std::endl;
    std::cout << "3: " << jobs_[r2]->get_title() << std::endl;
    //pick a job
    std::cout << "\n" << std::endl;
    std::cout << "Please choose a job with the associated number" << std::endl;
    int choice;
    std::cin >> choice;
    if(choice == 1){
        p->set_job(jobs_[r0]);
    }
    else if(choice == 2){
        p->set_job(jobs_[r1]);
    }
    else if(choice == 3){
        p->set_job(jobs_[r2]);
    }
    std::cout << "Your job is set to: " << p->get_job()->get_title() << std::endl;
    //decide income
    r0 = std::rand() % 3;
    std::vector<int> inc = p->get_job()->get_income_range();
    p->set_income(inc[r0]);
    std::cout << "Your income is set at: " << p->get_income() << std::endl;
    std::cout << "\n" << std::endl;
}

void Game::change_home(Player* p){
    //get 3 random homes
    int r0 = std::rand() % 5;
    int r1 = std::rand() % 5;
    int r2 = std::rand() % 5;
    //output three choices
    std::cout << "Your options for a house are:" << std::endl;
    std::cout << "1: " << houses_[r0]->get_title() << std::endl;
    std::cout << "2: " << houses_[r1]->get_title() << std::endl;
    std::cout << "3: " << houses_[r2]->get_title() << std::endl;
    //pick a house
    std::cout << "\n" << std::endl;
    std::cout << "Please choose a house with the associated number" << std::endl;
    int choice;
    std::cin >> choice;
    if(choice == 1){
        p->set_house(houses_[r0]);
    }
    else if(choice == 2){
        p->set_house(houses_[r1]);
    }
    else if(choice == 3){
        p->set_house(houses_[r2]);
    }
    std::cout << "Your home is set to: " << p->get_house()->get_title() << std::endl;
    //display rent
    std::cout << "Your rent is: " << p->get_house()->get_rent() << std::endl;
    int new_inc = p->get_income() - p->get_house()->get_rent();
    p->set_income(new_inc);
    std::cout << "Your income will now be reduced by your rent to: " << p->get_income() << std::endl;
    std::cout << std::endl;
}

//take turn functionality
int Game::take_turn(Player *p){
    int posit = p->get_position();
    if(posit > 46){
        return 0;
    }
    std::cout << p->get_name() << " it is time to take your turn" << std::endl;
    std::cout << "Your wealth is: " << p->get_wealth() << std::endl;
    int roll = 7;
    //roll choice, and make sure they pick something in the bounds
    while(roll > 6){
        std::cout << "Choose Your Roll Between 1 and 6" << std::endl;
        std::cout << "Remember that not all spaces are good" << std::endl;
        std::cin >> roll;
    }
    std::cout << "Your Roll is: " << roll << std::endl;
    p->change_position(roll);
    std::string pos;
    int posi = p->get_position();
    if(posi > 46){
        std::cout << "You have completed the game! You have this much money: " << p->get_wealth() << std::endl;;
        p->set_is_done(true);
    }
    pos = game_map_[posi];
    std::cout << "Your new position is: " << pos << std::endl;
    //if statements for your roll
    if(pos == "Payday"){
        if(p->get_is_lucky() == true){
            std::cout << "Congrats! You get paid. Because you are lucky you get paid more!!!" << std::endl;
            int w = p->get_wealth() + p->get_income() + 20000;
            p->set_wealth(w);
        }
        else{
            std::cout << "Congrats! You get paid. It is a good day in the COVID era" << std::endl;
            int w = p->get_wealth() + p->get_income();
            p->set_wealth(w);
            std::cout << "Your new income is: " << p->get_income();
        }
    }
    else if(pos == "Get COVID"){
        if(p->get_is_depressed() == true){
            std::cout << "You no longer have COVID! This will get rid of all COVID effects" << std::endl;
            p->set_is_depressed(false);
        }
        else{
            if(p->get_is_lucky() == true){
                std::cout << "You get COVID, but you have healthcare and just pay to make it go away" << std::endl;
                int w = p->get_income() - 10000;
                p->set_income(w);
            }
            else{
                std::cout << "Unfortunately you should have social distanced more, and now you are sick and depressed. This will effect the rest of you game until you land on another COVID space." << std::endl;
                p->set_is_depressed(true);
            }
        }
    }
    else if(pos == "Lucky?"){
        if(p->get_is_lucky() == true){
            std::cout << "Because you are already lucky, now you are unlucky" << std::endl;
            p->set_is_lucky(false);
        }
        else{
            std::cout << "Your sudden amount of luck is amazing. Maybe hit vegas" << std::endl;
            p->set_is_lucky(true);
        }
    }
    else if(pos == "Lose Your Job"){
        if(p->get_is_depressed() == true){
            std::cout << "Looks like you are depressed, so you are not going to put in the effort to find a new job. May as well just get some government assistance huh?" << std::endl;
            std::vector<int> u {1};
            Unemployment* u0 = new Unemployment("unemployed",u);
            p->set_job(u0);
            p->set_income(u0->get_income());
            std::cout << "Your new income is: " << p->get_income() << std::endl;
            
        }
        else{
            std::cout << "Looks like your company went under, or downsized. Either way, find a new job" << std::endl;
            change_job(p);
        }
    }
    else if(pos == "Go on a Date"){
        if(p->get_is_depressed() == true){
            std::cout << "Because you are depressed, this date does not work out. But you do lose some money on buying dinner" << std::endl;
            int w = p->get_wealth();
            p->set_wealth(w-20000);
        }
        else{
            std::cout << "The Date Goes Great! Your date even spared some money for you, and now you also are not interested in drugs" << std::endl;
            int w = p->get_wealth();
            p->set_wealth(w+20000);
            p->set_is_addict(false);
        }
    }
    else if(pos == "Do Drugs"){
        if(p->get_is_addict() == true){
            std::cout << "Because you have already tried drugs, and liked them, this is gonna cost you. This time the drugs are not given to you as a gift. This time you purchase them yourself" << std::endl;
            int w = p->get_wealth();
            p->set_wealth(w-30000);
        }
        else{
            std::cout << "This is your first time trying drugs, so they are all paid for by your homies. However, you are now addicted" << std::endl;
            p->set_is_addict(true);
        }
    }
    else if(pos == "Stimulus Package!"){
        std::cout << "Nothing else matters, here is some money from the government" << std::endl;
        int w = p->get_wealth();
        p->set_wealth(w + 50000);
    }
    else if(pos == "Lottery"){
        std::cout << "Your luck doesn't matter on this one. You just won a ton of money." << std::endl;
        int w = p->get_wealth();
        p->set_wealth(w + 100000);
    }
    std::cout << "Your Wealth at the End of Your Turn is: " << p->get_wealth() << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    return 0;
}

//checks to see if every player has passed the finish line
void Game::check_end(int np){
    int counter = 0;
    for(int i = 0; i < np; i++){
        if(players_[i]->get_is_done() == true){
            counter = counter + 1;
        }
    }
    if(counter == np){
        is_done_ = true;
    }
}

//tally up everyones final wealth, and give the win to the one with the most wealth
void Game::final_tally(int np){
    int max = 0;
    for(int i = 0; i < np - 1; i++){
         if(players_[i]->get_wealth() > players_[i+1]->get_wealth()){
             if(players_[i]->get_wealth() > max){
                 max = players_[i]->get_wealth();
             }
         }else{
              if(players_[i+1]->get_wealth() > max){
                    max = players_[i+1]->get_wealth(); 
             }
         }
    }
    //find who has max and cout the winner
    for(int i = 0; i < np; i++){
        if(players_[i]->get_wealth() == max){
            std::cout << "The winner of the Game of COVID life is: " << players_[i]->get_name() << std::endl;
        }
    }
    
}

