#include <stdio.h>

int main()
{
  int n, temp, counter=0;
  char y_n;
  printf("Enter size of array: ");
  scanf("%d", &n);

  int arr[n+10];
  printf("Enter array: ");
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }

  do {
    printf("\nEnter an element to insert: ");
    scanf("%d", &temp);
    arr[n+(counter++)] = temp;
    printf("Do you want to insert more? ");
    scanf(" %c", &y_n);
  } while((y_n == 'y')&&(counter < 11));

  printf("New array: ");
  for(int i=0; i<n+counter; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
