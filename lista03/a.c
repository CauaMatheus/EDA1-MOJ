#include <stdio.h>

int f91(int n)
{
  if (n > 100)
  {
    return n - 10;
  }

  return f91(f91(n + 11));
}

int main()
{
  int n;
  while (scanf("%i", &n) > 0 && n != 0)
  {
    printf("f91(%i) = %i\n", n, f91(n));
  }
}
