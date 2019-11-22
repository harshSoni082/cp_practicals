#include <stdio.h>

void insertion_sort(int arr[], int s)
{
  int key, j;
  for (int i = 1; i<s; i++)
  {
    key = arr[i];
    j = i - 1;

    while ((j>=0)&&(arr[j]>key))
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
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

  insertion_sort(arr, n);
  printf("Sorted array: ");
  for (int i=0; i<n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
