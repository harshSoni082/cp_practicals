#include <stdio.h>

int main()
{
  int (*ptr_arr)[5];
  int arr[] = {1, 2, 3, 4, 5};

  ptr_arr = &arr;
  printf("Size of pointer to an array: %lu\n", sizeof(ptr_arr));
  printf("Address of pointer: %u\n", &ptr_arr);
  printf("Value in pointer variable: %u\n", ptr_arr);
  printf("Pointer is pointing at: %u\n", *ptr_arr);
  printf("Address of array: %u\n", &arr);
  return 0;
}
