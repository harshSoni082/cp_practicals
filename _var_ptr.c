#include <stdio.h>

int main()
{
  int *ptr;
  int var;
  printf("Enter any integer: ");
  scanf("%d", &var);

  ptr = &var;
  printf("Value of pointer: %d\n", *ptr);
  printf("Address stored in pointer: %p\n", ptr);
  printf("Address of pointer variable: %p\n", &ptr);
  printf("Address of variable: %p\n", &var);

  return 0;
}
