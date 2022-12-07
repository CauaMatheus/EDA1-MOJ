#include <stdio.h>

int multipleOf9(char *digits, int degree)
{
  int sum = 0;
  for(int i = 0; digits[i] != 0; i++) {
    sum += digits[i] - 48;
  }

  if (sum > 9)
  {
    char intAsString[5]; // the maximum sum is 9*1000 and it has 4 digits
    intAsString[4] = 0; // removing memory trash for last char of string

    int i = 4;
    while (sum > 0)
    {
      i--;
      intAsString[i] = (sum % 10) + 48;
      sum /= 10;
    }

    // Now, i is the index of first digit. So the string starts at index i
    // So this is why &intAsString[0] + i
    return multipleOf9(&intAsString[0] + i, degree + 1);
  }
  else if (sum == 9)
  {
    return degree + 1;
  }
  else
  {
    return -1;
  }
}

int main()
{
  char digits[1001];
  while (scanf("%s", digits) > 0 && digits[0] != '0' || digits[1] != '\0')
  {
    int degree = multipleOf9(digits, 0);
    if (degree != -1)
    {
      printf("%s is a multiple of 9 and has 9-degree %i.\n", digits, degree);
    }
    else
    {
      printf("%s is not a multiple of 9.\n", digits);
    }
  }
}
