#include <stdio.h>

int main() {
  // 输入一个三位数 输出数字每一位的数字
  int n;
  scanf("%d", &n);
  printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100 % 10);
}
