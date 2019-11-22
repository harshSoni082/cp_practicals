#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void row_measure(int arr[][100], int r, int c)
{
  clock_t start, stop;
  double time_used;

  start = clock();
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
    {
      arr[i][j] = arr[i][j] >> 1;
    }
  }
  stop = clock();

  time_used = ((double)(stop - start)) / CLOCKS_PER_SEC;
  printf("Time used: %f\n", time_used);
}

int main()
{
  int r=1000, c=1000;
  int arr[r][c];
  srand(time(0));

  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
    {
      arr[i][j] = rand();
    }
  }
  row_measure(arr, r, c);
  return 0;
}
