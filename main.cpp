#include <iostream>
#include <cmath>
#include "difficulty.h"
#include "easy.h"
#include "hard.h"
#include "medium.h"
#include "extreme.h"
using namespace std;

int startup(){
  cout << "Welcome to the Casino Guessing Game!" << endl;
  cout << "Select your difficulty: " << endl;
  cout << "----------------------" << endl;
  cout << "Easy: Input (0)" << endl;
  cout << "Medium: Input (1)" << endl;
  cout << "Hard: Input (2)" << endl;
  cout << "EXTREME: Input (3)" << endl;
  int difficulty;
  cin >> difficulty;
  while (!(difficulty==0 || difficulty==1 || difficulty==2 || difficulty==3)){
    cout << "Invalid Input! Try again." << endl;
    cin >> difficulty;
  }
  return difficulty;
}

void easy_func(){
    easy easy_class;
    cout << "Guess a number from 0-10! " << endl;
    int value;
    cin >> value;
    easy_class.set_player_value(value);
    easy_class.compare();
    cout << "Congrats! You won: $" << easy_class.money;
}

void medium_func(){
    medium medium_class;
    cout << "Guess a number from 0-100! " << endl;
    int value;
    cin >> value;
    medium_class.set_player_value(value);
    medium_class.compare();
    cout << "Congrats! You won: $" << medium_class.money;
}

void hard_func(){
    hard hard_class;
    cout << "Guess a number from 0-1000! " << endl;
    int value;
    cin >> value;
    hard_class.set_player_value(value);
    hard_class.compare();
    cout << "Congrats! You won: $" << hard_class.money;
} 

void extreme_func(){
    extreme extreme_class;
    cout << "Guess a number from 0-10000! " << endl;
    int value;
    cin >> value;
    extreme_class.set_player_value(value);
    extreme_class.compare();
    cout << "Congrats! You won: $" << extreme_class.money;
}

int main() {
  int difficulty = startup();
  if (difficulty == 0){
    easy_func();
  }
  else if (difficulty == 1){
    medium_func();
  }
  else if (difficulty == 2){
    hard_func();
  }
  else if (difficulty == 3){
    extreme_func();
  }
}

