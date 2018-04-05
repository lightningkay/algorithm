#include <stdio.h>

int main() {
  int a[maxn][maxn];
  int n, x, y, tot = 0;
  scanf("%d", &n);
  tot = a[x = 0][y = n - 1] = 1;
  while (tot < n * n) {
    while (x + 1 < n && !a[x + 1][y]) a[++x][y] = ++tot;
    while (y - 1 >= 0 && !a[x][y - 1]) a[x][--y] = ++tot;
    while (x - 1 >= 0 && !a[x - 1][y]) a[--x][y] = ++tot;
    while (y + 1 < n && !a[x][y + 1]) a[x][++y] = ++tot;
  }
  for (int i = 0; i < n; i++) {
    int first = 1;
    for (int j = 0; j < n; j++) {
      if (first)
        first = 0;
      else
        printf(" ");
      printf("%-4d", a[i][j]);
    }
    printf("\n");
  }
}
