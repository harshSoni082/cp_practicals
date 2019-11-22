#include <stdio.h>

void bubble_sort(int arr[], int s)
{
  for(int i=0; i<s-1; i++)
  {
    for(int j=0; j<s-i-1; j++)
    {
      if(arr[j] > arr[j+1])
      {
        arr[j] += arr[j+1];
        arr[j+1] = arr[j] - arr[j+1];
        arr[j] = arr[j] - arr[j+1];
      }
    }
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

  bubble_sort(arr, n);
  printf("Sorted array: ");
  for(int i=0; i<n; i++)
  {
    printf("%d, ", arr[i]);
  }
  printf("\n");
}
