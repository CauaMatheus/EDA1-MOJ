#include <stdio.h>

int main()
{
  // hex = 4 bytes para a uint + 1 byte para o \0 da string
  char hex[5];

  // memset manual, pra resolver os casos de lixo de memoria
  // Obs: 0 até 3 vai sempre ser preenchido pela unsigned int lida
  hex[4] = 0;
  while (scanf("%x", (unsigned int *)hex) > 0)
  {
    printf("%s", hex);
  }
  printf("\n");
}
