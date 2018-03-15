/*
 * swap function
 *
 */

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void swap(int a, int b) {
  int t = a;
  a = b;
  b = t;
}
