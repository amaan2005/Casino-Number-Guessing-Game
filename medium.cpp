#include <iostream>
#include <cmath>
#include "medium.h"
using namespace std;

medium::medium(){
  srand((unsigned) time(NULL));
  computer_value = rand() % 100;
  money = medium_money;

}

