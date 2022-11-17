#include <stdio.h>

int main()
{
  int temp, sum;

  scanf("%i", &temp);
  sum += temp;
  scanf("%i", &temp);
  sum += temp;
  scanf("%i", &temp);
  sum += temp;

  scanf("%i", &temp);
  if (temp == sum)
  {
    puts("Acertou");
  }
  else
  {
    puts("Errou");
  }
}
