#include <stdio.h>
#include <math.h>

double mean(int arr[], int s)
{
  double sum = 0;
  for(int i=0; i<s; i++)
  {
    sum += arr[i];
  }

  return (double)(sum / s);
}

double std(int arr[], int s)
{
  double mu = mean(arr, s);
  double _diff = 0;

  for(int i=0; i<s; i++)
  {
    _diff += pow(arr[i] - mu, 2);
  }

  return (double)pow(_diff / s, 0.5);
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
  printf("Mean: %.4f\n", mean(arr, n));
  printf("Standard Deviation: %.4f\n", std(arr, n));

  return 0;
}
