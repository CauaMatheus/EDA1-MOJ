#include <stdio.h>

void printTower(char matrix[][11], int currentHeight)
{
  puts("~~~~~~~~~~~");
  for (int i = currentHeight + 4; i >= currentHeight; i--)
  {
    for (int j = 0; j < 11; j++)
    {
      printf("%c", matrix[i][j]);
    }
    printf("\n");
  }
  puts("~~~~~~~~~~~");
}

int main()
{
  int linesAmount;
  scanf("%i", &linesAmount);

  char matrix[linesAmount + 6][11];
  for (int i = 0; i < linesAmount + 6; i++)
  {
    for (int j = 0; j < 11; j++)
    {
      matrix[i][j] = ' ';
    }

    if (i < linesAmount)
    {
      matrix[i][4] = '|';
      matrix[i][5] = '|';
      matrix[i][6] = '|';
    }
  }

  int branchesAmount;
  scanf("%i", &branchesAmount);

  for (int i = 0; i < branchesAmount; i++)
  {
    char readChar;
    int branchFloor;
    scanf(" %c %i", &readChar, &branchFloor);

    int branchIndex = branchFloor - 1;
    if (readChar == 'D')
    {
      matrix[branchIndex][7] = '-';
      matrix[branchIndex][8] = '-';
      matrix[branchIndex][9] = '-';
    }
    else
    {
      matrix[branchIndex][1] = '-';
      matrix[branchIndex][2] = '-';
      matrix[branchIndex][3] = '-';
    }
  }

  int direction = 0;
  char initialDirection;
  scanf(" %c", &initialDirection);
  if (initialDirection == 'D')
  {
    direction = 1;
    matrix[0][8] = 'L';
    matrix[1][8] = 'L';
  }
  else
  {
    direction = -1;
    matrix[0][2] = 'L';
    matrix[1][2] = 'L';
  }

  int floorHeight = 0;
  printTower(matrix, floorHeight);

  scanf("%*c"); // ignorar o \n do input anterior
  char stepAction;
  while (scanf("%c", &stepAction) > 0)
  {
    int dangerZoneIndex = 5 - direction * 3;
    int currentZoneIndex = 5 + direction * 3;

    if (stepAction == 'T')
    {
      if (matrix[floorHeight + 1][dangerZoneIndex] == '-' || matrix[floorHeight][dangerZoneIndex] == '-')
      {
        puts("**beep**");
        continue;
      }

      matrix[floorHeight][dangerZoneIndex] = 'L';
      matrix[floorHeight + 1][dangerZoneIndex] = 'L';
      matrix[floorHeight][currentZoneIndex] = ' ';
      matrix[floorHeight + 1][currentZoneIndex] = ' ';

      direction = direction * -1;
    }
    else if (stepAction == 'B')
    {
      int logIndex = 5 + direction;
      char logToBreak = matrix[floorHeight][logIndex];
      if (logToBreak == 61 - direction) // 62 = '>' e 60 = '<'
      {
        floorHeight++;
        if (matrix[floorHeight + 1][currentZoneIndex] == '-')
        {
          puts("**morreu**");
          return 0;
        }

        matrix[floorHeight + 1][currentZoneIndex] = 'L';
      }
      else
      {
        // 62 = '>' e 60 = '<'
        matrix[floorHeight][logIndex] = 61 - direction;
      }
    }
    else
    {
      continue;
    }

    printTower(matrix, floorHeight);
  }
}
