#include <stdio.h>

void cbv_swap(int _x, int _y)
{
  _x += _y;
  _y = _x - _y;
  _x = _x - _y;

  printf("Values in call by value function after swap: %d, %d\n", _x, _y);
}

void cbr_swap(int *_x, int *_y)
{
  *_x += *_y;
  *_y = *_x - *_y;
  *_x = *_x - *_y;

  printf("Values in call by ref. function after swap: %d, %d\n", *_x, *_y);
}

int main()
{
  int x, y;
  printf("Enter two numbers: ");
  scanf("%d%d", &x, &y);

  cbv_swap(x, y);
  printf("Values after call by value swap <x, y>: %d, %d\n", x, y);

  cbr_swap(&x, &y);
  printf("Values after call by ref. swap <x, y>: %d, %d\n", x, y);

  return 0;

}
