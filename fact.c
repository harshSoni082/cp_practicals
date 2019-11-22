#include <stdio.h>

long int factorial(int n)
{
  if(n == 2)
  {
    return 2;
  }
  return n * factorial(n-1);
}

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The factorial is: %ld\n", factorial(n));
  return 0;
}
