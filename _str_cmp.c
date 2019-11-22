#include <stdio.h>
#include <stdlib.h>

int cmpstr(char *_dest, char *_src)
{
  while((*_dest - *_src == 0)&&(*_dest != '\0'))
  {
    _dest++;
    _src++;
  }
  return *_dest - *_src;
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

  if(!cmpstr(str_1, str_2))
  {printf("Strings are same.\n");}
  else
  {printf("Strings are different.\n");}
  return 0;
}
