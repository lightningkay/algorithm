#include <stdio.h>

int main() {
  // 变量数值交换 (使用一个变量交换)
  int a, b, t;
  scanf("%d%d", &a, &b);
  t = a;
  a = b;
  b = t;
  printf("%d %d\n", a, b);
}
