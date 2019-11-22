#include <stdio.h>
#include <stdlib.h>

void nconcat(char *_dest, char *_src, int n)
{
  for(;*_dest!='\0'; _dest++);
  while(n > 0)
  {
    *(_dest++)=*(_src++);
    n--;
  }
  *_dest = '\0';
}

int main()
{
  char *str_1, *str_2;
  int n;
  str_1 = (char *)malloc(sizeof(char)*100);
  str_2 = (char *)malloc(sizeof(char)*50);
  printf("Enter string 1: ");
  scanf(" %s", str_1);
  printf("Enter string 2: ");
  scanf(" %s", str_2);
  printf("Enter value of n: ");
  scanf("%d", &n);

  nconcat(str_1, str_2, n);
  printf("Resultant string: %s\n", str_1);
  return 0;
}
