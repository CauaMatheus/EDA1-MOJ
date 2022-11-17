#include <stdio.h>

int faz_conta_direito(int parcelas, char op)
{
  int sum, temp;
  scanf("%i", &sum);

  // if fora do while para evitar um if para cada iteração do loop
  if (op == '+')
  {
    while (--parcelas)
    {
      scanf("%i", &temp);
      sum += temp;
    }
  }
  else
  {
    while (--parcelas)
    {
      scanf("%i", &temp);
      sum -= temp;
    }
  }

  return sum;
}
