#include <stdio.h>

int main() {
  FILE *fin, *fout;
  fin = fopen("data.in", "rb");
  fout = fopen("data.out", "wb");
  int x, n = 0, min = INF, max = -INF, s = 0;
  // fin = stdin;
  // fout = stdout;
  while (fscanf(fin, "%d", &x) == 1) {
    s += x;
    if (x < min) min = x;
    if (x > max) max = x;
    n++;
  }
  fprintf(fout, "%d %d %.3f\n", min, max, (double)s / n);
  fclose(fin);
  fclose(fout);
}
