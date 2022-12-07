#include <stdio.h>
#include <stdlib.h>

int* readValues(int *v, int actualSize) {
  v = realloc(v, sizeof(int) * (actualSize + 1));
  scanf("%i", &v[actualSize]);

  if(v[actualSize] == 0) {
    return v;
  } else {
    return readValues(v, actualSize + 1);
  }
}

int maxAcc;
void accumulate(int *v, int acc) {
  if(*v == 0) {
    return;
  }

  acc += *v;
  if(acc > maxAcc) {
    accumulate(v+1, 0);
    printf("%i\n", *v);
  } else {
    accumulate(v+1, acc);
  }
}

int main() {
  int *v = malloc(sizeof(int));
  v = readValues(v, 0);

  scanf("%i", &maxAcc);
  accumulate(v, 0);
}
