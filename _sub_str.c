#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strsrch(char *_dest, char *_src, int counter)
{
  if((*_dest == '\0')||(*_src == '\0'))
  {
    if(counter == strlen(_src-counter))
    {return 1;}
    else
    {return 0;}
  }
  if(*_dest == *_src)
  {return strsrch(_dest+1, _src+1, counter+1);}
  else
  {return strsrch(_dest+1, _src-counter, 0);}
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
  if(strsrch(str_1, str_2, 0))
  {printf("Substring found.\n");}
  else
  {printf("Substring not found.\n");}
  return 0;
}
