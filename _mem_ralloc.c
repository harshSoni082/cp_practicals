#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *arr = (int *)malloc(sizeof(int)*10);
  srand(42);
  for(int i=0; i<10; i++)
  { *(arr+i) = rand()%100; }
  printf("Initial Array: ");
  for(int i=0; i<10; i++)
  { printf("%d, ", *(arr+i)); }
  printf("\n");

  arr = realloc(arr,  sizeof(int)*15);
  for(int i=10; i<15; i++)
  { *(arr+i) = rand()%100; }
  printf("Array after reallocation: ");
  for(int i=0; i<15; i++)
  { printf("%d, ", *(arr+i)); }
  printf("\n");

  return 0;
}
