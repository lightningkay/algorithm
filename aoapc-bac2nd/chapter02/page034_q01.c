#include <stdio.h>

int main() {
  for (int i = 100; i < 1000; i++) {
    int a, b, c, temp;
    a = i / 100;
    b = i / 10 % 10;
    c = i % 10;
    temp = a * a * a + b * b * b + c * c * c;
    if (temp == i) printf("%d\n", temp);
  }
}
