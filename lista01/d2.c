#include <stdio.h>
#include <string.h>

int main()
{
  int answerCount = 0;
  int yesCount = 0;
  char answer[4];

  int triageCount = 0;
  while (scanf("%3s", answer) > 0)
  {
    if (strcmp(answer, "sim") == 0)
    {
      yesCount += 1;
    }

    answerCount++;
    if (answerCount == 10)
    {
      if (yesCount > 1)
      {
        triageCount += 1;
      }

      answerCount = 0;
      yesCount = 0;
    }
  }

  printf("%i\n", triageCount);
}
