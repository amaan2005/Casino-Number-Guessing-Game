#include <iostream>
#include <cmath>
#include "easy.h"
using namespace std;

easy::easy(){
  srand((unsigned) time(NULL));
  computer_value = rand() % 10;
  money = easy_money;

}