#include <stdio.h>

int main() {
  // 变量数值交换 (不使用变量)
  int a, b;
  scanf("%d%d", &a, &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("%d %d\n", a, b);
}
