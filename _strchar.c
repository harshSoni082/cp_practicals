#include <stdio.h>

char *strchar(char *_str, char c)
{
  while((*_str != c)&&(*_str != '\0'))
  {
    _str++;
  }
  return _str;
}

int main()
{
  char *res, str[100], c;
  printf("Enter string: ");
  scanf(" %s", str);
  printf("Enter the character from where to print: ");
  scanf(" %c", &c);

  res = strchar(str, c);
  printf("Resultant String: %s\n", res);
  return 0;
}
