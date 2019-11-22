#include <stdio.h>

int global = 10;  // gloabl variable

int increment(int _param)
{
  static int inc = 0; // staic variable
  _param += inc*global;
  inc++;
  return _param;
}

int main()
{
  int temp = 0; // local variable
  for(int i=0; i<5; i++)
  { printf("%d, ", increment(temp)); }
  printf("\n");
  return 0;
}
