#include <stdio.h>

int main() {
  double sum = 0;

  for (int i = 0;; i++) {
    double a = 1.0 / (2 * i + 1);
    if (i % 2 == 0)
      sum = sum + a;
    else
      sum = sum - a;
    if (a < 0.000001) break;
  }

  printf("%.6f\n", sum);
}
