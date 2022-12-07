#include <stdio.h>

int main()
{
  int T, N;
  while (scanf("%d %d", &T, &N) >= 2 && T != 0)
  {
    int totalPoints = 3 * N;
    int winRead;
    for (int i = 0; i < T; i++)
    {
      scanf("%*s %d", &winRead);
      totalPoints -= winRead;
    }

    printf("%i\n", totalPoints);
  }
}
