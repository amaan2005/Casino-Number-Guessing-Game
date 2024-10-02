#ifndef DIFFICULTY_H
#define DIFFICULTY_H
#include <iostream>
#include <cmath>
using namespace std;



class difficulty{

    public:

    difficulty();
    void set_computer_value(int comp_value_param);
    void set_player_value(int player_value_param);
    int get_computer_value();
    int get_player_value();  
    void compare();

    double computer_value;
    int player_value;
    int wrong_count = 0;
    double money;
    
    
};

#endif