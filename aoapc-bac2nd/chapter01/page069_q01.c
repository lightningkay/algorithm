#include <stdio.h>
#include "swap.h"

int main() {
  int a = 3, b = 4;
  swap(&a, &b);
  printf("%d %d\n", a, b);
}
