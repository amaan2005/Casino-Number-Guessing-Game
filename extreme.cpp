#include <iostream>
#include <cmath>
#include "extreme.h"
using namespace std;

extreme::extreme(){
  srand((unsigned) time(NULL));
  computer_value = rand() % 10000;
  money = extreme_money;

}

