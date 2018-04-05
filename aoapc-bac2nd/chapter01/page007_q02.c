#include <stdio.h>

int main() {
  // 输入一个三位数 输出各个位数字的和
  int n, m;
  scanf("%d", &n);
  m = n % 10 * 100 + n / 10 % 10 * 10 + n / 100 % 10;
  printf("%3d\n", m);
}
