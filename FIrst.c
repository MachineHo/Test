#include <stdio.h>

int main() {
  int a, b;
  while(1) {
    if (scanf("%d %d", &a, &b) == EOF)
      break;
    printf("%d", a + b);
  }
// hello
// this is final final final test
  return 0;
}