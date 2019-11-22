#include <stdio.h>

void selection_sort(int arr[], int s)
{
  int j, min_idx, temp;
  for (int i=0; i<s-1; i++)
  {
    min_idx = i;
    for (j = i+1; j<s; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;

    temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
  }
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

  selection_sort(arr, n);
  printf("Sorted array: ");
  for (int i=0; i<n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
