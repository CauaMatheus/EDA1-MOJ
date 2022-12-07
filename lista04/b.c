#include <stdio.h>

printy(char *string) {
  if(*string == 0) {
    puts("");
    return;
  }

  if(*string == 'x') {
    printf("%c", 'y');
  } else {
    printf("%c", *string);
  }
  printy(string + 1);
}

int main() {
  char string[81];
  scanf("%s", string);

  printy(string);
}
