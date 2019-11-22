#include <stdio.h>

long int power(int _base, int _power)
{
  if(_power == 1)
  {
    return _base;
  }
  return _base*power(_base, _power-1);
}

int main()
{
  int base, po;
  printf("Enter the base and power: ");
  scanf("%d%d", &base ,&po);
  printf("The result is: %ld\n", power(base, po));
  return 0;
}
