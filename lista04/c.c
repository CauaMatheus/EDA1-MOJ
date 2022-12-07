#include <stdio.h>

void reversePrint(char *string) {
  if(*string == 0) {
    puts("");
    return;
  }

  reversePrint(string + 1);
  printf("%c", *string);
}

int main() {
  char string[501];
  scanf("%s", string);

  reversePrint(string);
}
