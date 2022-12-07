#include <stdio.h>

int main()
{
  int left, right;

  char winners[8];
  for (int i = 0; i < 8; i++)
  {
    scanf("%d %d", &left, &right);
    winners[i] = 'A' + i * 2 + (right > left);
  }

  for (int i = 0; i < 4; i++)
  {
    scanf("%d %d", &left, &right);
    winners[i] = winners[i * 2 + (right > left)];
  }

  for (int i = 0; i < 2; i++)
  {
    scanf("%d %d", &left, &right);
    winners[i] = winners[i * 2 + (right > left)];
  }

  scanf("%d %d", &left, &right);
  if (left > right)
  {
    printf("%c\n", winners[0]);
  }
  else
  {
    printf("%c\n", winners[1]);
  }
}
