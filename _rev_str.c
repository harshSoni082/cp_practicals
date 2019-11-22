#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strrev(char *_str)
{
  int len = strlen(_str);
  char temp;

  for(int i=0, j=len-1; i<len/2; i++, j--)
  {
    temp = _str[i];
    _str[i] = _str[j];
    _str[j] = temp;
  }
}

int main()
{
  char *str;
  str = (char *)malloc(sizeof(char)*100);
  printf("Enter string: ");
  scanf(" %s", str);

  strrev(str);
  printf("Reversed string: %s\n", str);
  return 0;
}
