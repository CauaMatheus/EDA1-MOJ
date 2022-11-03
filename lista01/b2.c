#include <stdio.h>

int main()
{
  int n, current, sum;
  scanf("%i", &n);

  sum = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%i", &current);
    sum += current;
  }

  printf("%i\n", sum);
}
