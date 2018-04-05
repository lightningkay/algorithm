#include <stdio.h>

int main() {
  double i = 0.1;
  for (int j = 0; j < 20000; j++) {
    i /= 1000000000;
    if (j % 1000 == 0) printf("%e\n", i);
  }
}
