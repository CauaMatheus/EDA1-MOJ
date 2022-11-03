#include <stdio.h>

int main()
{
  int count = 0;

  while (scanf("%*i") != -1)
  {
    count++;
  }

  printf("%i\n", count);
}
