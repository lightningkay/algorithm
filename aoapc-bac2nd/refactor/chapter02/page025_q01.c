#include <stdio.h>

int main() {
  int n, sum = 0;

  scanf("%d", &n);
  printf("%d\n", n);

  for (int i = 1; i <= n; i++) {
    int a = 1;
    for (int j = 1; j <= i; j++) {
      a = a * j;
    }

    sum = sum + a;
  }
  printf("%d\n", sum);
  printf("%d\n", sum % 1000000);
}
