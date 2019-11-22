#include <stdio.h>

int main()
{
  int *ptr[4];
  int arr[4][5] = {
    {1, 2, 3, 4, 5},
    {11, 12, 13, 14, 15},
    {21, 22, 23, 24, 25},
    {31, 32, 33, 34, 35}
  };

  for(int i=0; i<4; i++)
  {
    ptr[i] = arr[i];
  }
  printf("Size of pointer array: %d\n", sizeof(ptr));
  for(int i=0; i<4; i++)
  {
    printf("Address stored in pointer %d: %u\n", i+1, ptr[i]);
  }
  for(int i=0; i<4; i++)
  {
    printf("Value pointer by pointer %d: %u\n", i+1, *ptr[i]);
  }
  printf("Address of pointer variable: %u\n", &ptr);
  printf("Address of array: %u\n", arr);
  return 0;
}
