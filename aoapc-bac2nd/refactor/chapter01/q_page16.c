#include <stdio.h>

int main() {
  int i = 6000000;
  while (i > 0) {
    i++;
  }
  printf("%d\n", i);
  printf("%d\n", i - 1);
}
