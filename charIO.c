#include <stdio.h>
#include <math.h>

// function declarations

int power(int n, int m);

// start of main

int main() {

  int i;

  for (i == 2; i < 10; ++i) {
    printf("%d %3d %6d\n", i,  power(2, i), power(-3, i));
  }
  
}

// end of main

//function definitions

int power(int n, int m) {

  int result;
  result = pow(n, m);
  return result;
  
}
