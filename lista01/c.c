#include <stdio.h>

int main()
{
  int totalRounds;
  scanf("%i", &totalRounds);

  while (totalRounds != 0)
  {
    int betoVictories = 0;
    int current = 0;
    for (int i = 0; i < totalRounds; i++)
    {
      scanf("%i", &current);
      betoVictories += current;
    }

    printf("Alice ganhou %i e Beto ganhou %i\n", totalRounds - betoVictories, betoVictories);
    scanf("%i", &totalRounds);
  }

  return 0;
}
