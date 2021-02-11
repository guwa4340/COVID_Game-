#include <string>
#include <vector>
#include <map>

class Job {
public:
    Job();
    Job(std::string t, std::vector<int> ir); //constructor
    virtual void set_title(std::string t); 
    std::string get_title()  { return title_; } //inline member-function
    void set_income_range(std::vector<int> ir);
    std::vector<int> get_income_range() { return income_range_; } //inline member-function   
    
private:
    std::string title_;
    std::vector<int> income_range_;
};

class Unemployment : public Job { //inherited class from Job
public:
    Unemployment(std::string t, std::vector<int> ir); //contructor
    void set_title(std::string t);
    int get_income() { return income_; }
private:
    int income_;
    std::string title_;
};

class House {
public:
    House();
    House(int r, std::string t, int m); //constructor
    int get_rent() { return rent_; } //inline member-function
    std::string get_title() { return title_; } //inline member-function
    int get_mortgage() { return mortgage_;} //inline member-function
    
private:
    int rent_;
    std::string title_;
    int mortgage_;
};

class Player {
public:
    Player(int i, std::string n); //constructor
    std::string get_name() { return name_; } //inline member-function
    int get_id() { return id_; }
    void set_job(Job* j);
    Job* get_job() { return job_; } //inline member-function
    void set_income(int i);
    int get_income() { return income_; } //inline member-function
    void set_house(House* h);
    House* get_house() { return house_; } //inline member-function
    void set_wealth(int w);
    int get_wealth() { return wealth_;} //inline member-function
    void display_wealth();
    void change_position(int p);
    int get_position() { return position_; }
    bool get_is_done() { return is_done_; }
    void set_is_done(bool b);
    //
    bool get_is_lucky() { return is_lucky_; };
    bool get_is_addict() { return is_addict_; };
    bool get_is_depressed() { return is_depressed_; }
    //
    void set_is_lucky(bool l);
    void set_is_addict(bool a);
    void set_is_depressed(bool d);
    
private:
    int id_;
    std::string name_;
    Job* job_;
    int income_;
    House* house_;
    int wealth_ = 50000;
    bool is_lucky_;
    bool is_addict_;
    bool is_depressed_;
    int position_ = 0;
    bool is_done_;
};

class Game {
public:
    Game(int num_players); //constructor
    std::vector<Player*> get_players() { return players_; } //inline member-function
    bool is_done() { return is_done_; }
    void game_over();
    void change_job(Player* p);
    void change_home(Player* p);
    void check_end(int np);
    int take_turn(Player* p);
    void final_tally(int np);
    
    //functions for different game events
    
    
private:
    std::vector<Player*> players_;
    std::vector<std::string> game_map_;
    bool is_done_ = false;
    std::vector<Job*> jobs_;
    std::vector<House*> houses_;
};