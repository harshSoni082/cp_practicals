#include <stdio.h>

int srch(int arr[], int ele, int s)
{
  int flag = -1;
  for(int i=0; i<s; i++)
  {
    if(arr[i] == ele)
    {
      flag = i;
    }
  }
  return flag;
}

int main()
{
  int n, x;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter array: ");
  for(int i=0; i<n; i++)
  { scanf("%d", &arr[i]); }
  printf("Enter element to search: ");
  scanf("%d", &x);

  printf("Element found at index: %d\n", srch(arr, x, n));
  return 0;
}
