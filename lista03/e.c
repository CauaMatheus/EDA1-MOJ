long int memorizedFib[81] = {[0 ... 80] = 0};
long int fibonacci(int n)
{
  if (n < 3)
  {
    return 1;
  }

  if (memorizedFib[n] != 0)
  {
    return memorizedFib[n];
  }

  memorizedFib[n] = fibonacci(n - 1) + fibonacci(n - 2);
  return memorizedFib[n];
}

// #include <stdio.h>
// int main() {
//   printf("%li\n", fibonacci(80));
// }
