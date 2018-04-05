#include <stdio.h>

int main() {
  int num;
  for (int a = 1; a <= 9; a++) {
    for (int b = 0; b <= 9; b++) {
      num = a * 1100 + b * 11;
      int m = floor(sqrt(num) + 0.5);
      if (m * m == num) {
        printf("%d\n", num);
      }
    }
  }
}
