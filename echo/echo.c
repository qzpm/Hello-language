#include <stdio.h>

int main(void) {
  char s[256];
  scanf("%255s", s);
  printf("%s\n", s);
  return 0;
}
