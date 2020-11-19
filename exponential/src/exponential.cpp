//============================================================================
// Name        : exponential.cpp
// Author      : jerin jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float x = 10.5, sum = 1, term = 1, temp = 0;
  int i = 0;

  while (temp != sum)
  {
    i++;
    term = term * x / i;
    temp = sum;
    sum = sum + term;
    printf("%2d %-12f %-14f\n", i, term, sum);
  }
  printf("exact value = %f\n", exp((double)x));
  return 0;
}
