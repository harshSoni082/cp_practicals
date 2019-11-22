#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void lower(char *_str)
{
  for(int i=0; _str[i]!='\0'; i++)
  {
    if((_str[i]>= 'A')&&(_str[i] <= 'Z'))
    {_str[i] += 32;}
  }
}

void upper(char *_str)
{
  for(int i=0; _str[i]!='\0'; i++)
  {
    if((_str[i]>= 'a')&&(_str[i] <= 'z'))
    {_str[i] -= 32;}
  }
}

int main()
{
  char *str;
  str = (char *)malloc(sizeof(char)*100);
  printf("Enter string: ");
  scanf(" %s", str);

  lower(str);
  printf("Lowered string: %s\n", str);
  upper(str);
  printf("Uppered string: %s\n", str);
  return 0;
}
