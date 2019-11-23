#include <stdio.h>

int main()
{
  int n, flag=0;
  printf("Enter a number: ");
  scanf("%d", &n);

  switch (n%2) {
    case 0: printf("Number is divisible by 2\n");
            flag++;
            break;

    default : printf("Number is not divisible by 2\n");
              break;
  }
  switch (n%7) {
    case 0: printf("Number is divisible by 7\n");
            flag++;
            break;

    default : printf("Number is not divisible by 7\n");
              break;
  }
  switch (n%11) {
    case 0: printf("Number is divisible by 11\n");
            flag++;
            break;

    default : printf("Number is not divisible by 11\n");
              break;
  }

  if (flag == 3)
  { printf("Number is divisible by all 2, 7 and 11\n"); }

  return 0;
}
