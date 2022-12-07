#include <stdio.h>

int main()
{
  int diameter;
  scanf("%d", &diameter);

  int lado;
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &lado);
    if (lado < diameter)
    {
      puts("N");
      return 0;
    }
  }
  puts("S");
}
