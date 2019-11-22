#include <stdio.h>

int linear_search(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
    {
      return i;
    }
  return -1;
}

int main()
{
  int n, x, idx;
  printf("Enter size of array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter array: ");
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter element to search: ");
  scanf("%d", &x);
  idx = linear_search(arr, n, x);
  (idx == -1) ? printf("Element is not present in array\n")
              : printf("Element is present at index: %d\n",
                       idx);
  return 0;
}
