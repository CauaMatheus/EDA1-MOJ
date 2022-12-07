#include <stdio.h>

int sumDigits(char *num)
{
  if (*num == 0)
  {
    return 0;
  }

  return (*num - 48) + sumDigits(num + 1);
}

int main()
{
  char num[14]; // max value is 10^12 that has 13 digits
  scanf("%s", num);

  printf("%i\n", sumDigits(num));
}
