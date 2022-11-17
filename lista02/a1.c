#include <stdio.h>

int main()
{
  int n;
  scanf("%i", &n);

  int temp, sum = 0;
  while (n--)
  {
    scanf("%i", &temp);
    sum += temp;
  }

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
