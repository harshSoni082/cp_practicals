#include <stdio.h>

void toh(int n, char _src, char _dest, char _aux)
{
  if (n == 1)
  {
    printf("Move disk 1 from rod %c to rod %c\n", _src, _dest);
    return;
  }
  toh(n-1, _src, _aux, _dest);
  printf("Move disk %d from rod %c to rod %c\n", n, _src, _dest);
  toh(n-1, _aux, _dest, _src);
}

int main()
{
  int n;
  printf("Enter number of disks: ");
  scanf("%d", &n);
  toh(n, 'A', 'C', 'B');
  return 0;
}
