#include <stdio.h>
#include <stdlib.h>

int len(char *str)
{
  int i;
  for(i=0; str[i]!='\0'; i++);
  return i;
}

int main()
{
  char str[100];
  // str = (char *)malloc(sizeof(char)*100);
  printf("Enter string: ");
  scanf(" %s", str);

  printf("Length of string: %d\n", len(str));
  return 0;
}
