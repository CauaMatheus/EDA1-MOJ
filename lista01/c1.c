#include <stdio.h>

int main()
{
  int n;
  int testCount = 0;
  while (scanf("%i", &n) && n != 0)
  {
    testCount++;
    printf("Teste %i\n", testCount);

    int diff = 0;
    int J, Z;
    for (int i = 0; i < n; i++)
    {
      scanf("%d %d", &J, &Z);
      diff += J - Z;
      printf("%d\n", diff);
    }

    printf("\n");
  }

  return 0;
}
