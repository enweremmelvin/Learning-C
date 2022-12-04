#include <stdio.h>

main() {
  int fahr;
  int cels;

  fahr = 100;
  const int CELS = 0;

  while (fahr >= CELS) {
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    fahr -= 10;
  }
}
