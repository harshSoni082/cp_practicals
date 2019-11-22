#include <stdio.h>

int del_element(int arr[], int s, int ele)
{
  int flag = -1;
  if(arr[s-1] == ele)
  {
    flag = 0;
  }
  else
  {
    for(int i=0; i<s; i++)
    {
      if((arr[i] == ele)||(flag == 0))
      {
        arr[i] = arr[i+1];
        flag = 0;
      }
    }
  }
  if(flag == 0)
  {
    s--;
  }
  else
  {
    s = -1;
  }
  return s;
}

int main()
{
  int n, s, temp;
  char y_n;
  printf("Enter size of array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter array: ");
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }

  do {
    printf("\nEnter an element to delete: ");
    scanf("%d", &temp);
    s = del_element(arr, n, temp);
    if(s != -1)
    {
      n--;
    }
    else
    {
      printf("Element not found!\n");
    }
    printf("Do you want to delete more? ");
    scanf(" %c", &y_n);
  } while((y_n == 'y')&&(n > 0));

  if((n == 0)&&(y_n == 'y'))
  {
    printf("The array is empty now, no more deletions allowed!\n");
  }
  printf("New array: ");
  for(int i=0; i<n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
