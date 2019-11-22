#include <stdio.h>

void fibo(int i, int f_1, int f_2, int n)
{
  if(i >= n)
  {
    return;
  }
  printf("%d, ", f_1);
  return fibo(i+1, f_2, f_1+f_2, n);
}

int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("The fibonacci series is: ");
  fibo(0, 0, 1, n);
  printf("\n");
  return 0;
}
