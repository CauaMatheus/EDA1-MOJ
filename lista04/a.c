#include <stdio.h>

int findPair(char *string, int quantity)
{
  if (*(string + 2) == 0)
  {
    return quantity;
  }

  if (*string == *(string + 2))
  {
    quantity++;
  }
  return findPair(string+1, quantity);
}

int main()
{
  char string[201];
  scanf("%[^\n]", string);

  printf("%i\n", findPair(string, 0));
}
