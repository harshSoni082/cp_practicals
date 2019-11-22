#include <stdio.h>

int find_smallest(int arr[], int s)
{
  int flag = 0;
  for(int i=1; i<s; i++)
  {
    if(arr[i] < arr[flag])
    {
      flag = i;
    }
  }
  return flag+1;
}

int main()
{
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter array: ");
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Position of smallest element: %d\n", find_smallest(arr, n));
  return 0;
}
