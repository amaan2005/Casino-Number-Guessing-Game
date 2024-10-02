#include <iostream>
#include <cmath>
#include "hard.h"
using namespace std;

hard::hard(){
  srand((unsigned) time(NULL));
  computer_value = rand() % 1000;
  money = hard_money;

}

