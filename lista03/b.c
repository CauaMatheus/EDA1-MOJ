#include <stdio.h>

void movex(char *s) {
  if (*s == 0) {
    return;
  }

  if (*s == 'x') {
    movex(s + 1);
    printf("x");
  } else {
    printf("%c", *s);
    movex(s + 1);
  }
}

int main() {
  char string[101];
  scanf("%s", string);

  movex(string);
  puts("");
}
