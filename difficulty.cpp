#include <iostream>
#include <cmath>
#include "difficulty.h"
using namespace std;

difficulty::difficulty(){};

void difficulty::set_computer_value(int comp_value_param){
    computer_value=comp_value_param;
}

void difficulty::set_player_value(int player_value_param){
    player_value=player_value_param;
}

int difficulty::get_computer_value(){
    return computer_value;
}

int difficulty::get_player_value(){
    return player_value;
}

void difficulty::compare(){
  while(computer_value>player_value){
    money *= 0.9;
    cout << "Too low! Try again." << endl;
    cin >> player_value;
    difficulty::compare();
  }
  while(computer_value<player_value){
    money *= 0.9;
    cout << "Too high! Try again." << endl;
    cin >> player_value;
    difficulty::compare();
  }
}



