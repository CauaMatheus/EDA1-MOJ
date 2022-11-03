#include <stdio.h>

int main()
{
  int l;
  scanf("%i", &l);

  char line[l][1001];
  int lineLen[l];
  for (int i = 0; i < l; i++)
  {
    scanf(" %1000[^\n]%n", line[i], &lineLen[i]);
    lineLen[i]--;
  }

  int lineIndex;
  int columnIndex;
  scanf(" %i %i", &lineIndex, &columnIndex);
  lineIndex--;
  columnIndex--;

  char action;
  while (scanf(" %c", &action) > 0)
  {
    if (action == 'k')
    {
      if (lineIndex > 0)
      {
        lineIndex--;
      }
    }
    else if (action == 'j')
    {
      if (lineIndex < l - 1)
      {
        lineIndex++;
      }
    }

    printf("%i ", lineIndex + 1);
    if(lineLen[lineIndex] > columnIndex) {
      printf("%i %c\n", columnIndex + 1, line[lineIndex][columnIndex]);
    } else {
      printf("%i %c\n", lineLen[lineIndex], line[lineIndex][lineLen[lineIndex]-1]);
    }
  }
}
