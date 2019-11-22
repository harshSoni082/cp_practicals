#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *darr = (int *)malloc(sizeof(int)*10);
  int *darr_0 = (int *)calloc(10, sizeof(int));

  printf("Malloc allocated memory: ");
  for(int i=0; i<10; i++)
  { printf("%d, ", *(darr+i)); }
  printf("\nCalloc allocated memory: ");
  for(int i=0; i<10; i++)
  { printf("%d, ", *(darr_0+i)); }
  printf("\n");

  free(darr);
  free(darr_0);
  return 0;
}
