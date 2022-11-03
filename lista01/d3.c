#include <stdio.h>

int main()
{
  int restaurants;
  int day = 0;
  while (scanf("%i", &restaurants) > 0)
  {
    day++;
    int maxScore = -1;
    long int minCode = 10000001;

    long int code;
    int score;
    for (int i = 0; i < restaurants; i++)
    {
      scanf("%li %i", &code, &score);
      if (score > maxScore)
      {
        maxScore = score;
        minCode = code;
      }
      else if (score == maxScore)
      {
        if (code < minCode)
        {
          minCode = code;
        }
      }
    }

    printf("Dia %i\n%li\n\n", day, minCode);
  }
}
