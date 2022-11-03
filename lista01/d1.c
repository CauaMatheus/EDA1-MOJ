#include <stdio.h>

int main()
{
  char marte[6] = "marte";
  char string[31];

  while (scanf("%30s", string) > 0)
  {
    int equals = 1;
    for (int i = 0; i < 6; i++)
    {
      if (string[i] != marte[i])
      {
        equals = 0;
        break;
      }
    }

    if (equals == 1)
    {
      puts("Leonardo Cicero Marciano");
      return 0;
    }
  }

  puts("none");
}
