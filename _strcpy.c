#include <stdio.h>
#include <stdlib.h>

void strcopy(char *_dest, char *_src)
{
  while(*_src != '\0')
  {
    *(_dest++)=*(_src++);
  }
  *_dest = '\0';
}

int main()
{
  char *str_1, *str_2;
  str_1 = (char *)malloc(sizeof(char)*100);
  str_2 = (char *)malloc(sizeof(char)*100);
  printf("Enter string 1: ");
  scanf(" %s", str_1);
  printf("Enter string 2: ");
  scanf(" %s", str_2);

  strcopy(str_1, str_2);
  printf("Resultant string: %s\n", str_1);
  return 0;
}
