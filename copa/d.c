#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  char teamA[n + 1];
  scanf("%s\n", teamA);

  int diff = 0;
  char teamB;
  int maxDiff = n;
  for (int i = 0; i < n; i++)
  {
    if (teamA[i] == 'o')
    {
      diff++;
    }

    if (diff > maxDiff || diff <= -maxDiff)
    {
      printf("%i\n", i * 2 + 1);
      return 0;
    }

    scanf("%c", &teamB);
    if (teamB == 'o')
    {
      diff--;
    }

    maxDiff--;
    if (diff > maxDiff || diff < -maxDiff)
    {
      printf("%i\n", (i + 1) * 2);
      return 0;
    }
  }

  if (diff == 0)
  {
    puts("Empate");
  }
  else
  {
    printf("%i\n", n * 2);
  }
}
