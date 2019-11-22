#include <stdio.h>
#include <string.h>
#define MAX 50

int main()
{
  char _buffer[MAX], temp;
  FILE *fin = fopen("file_io.dat", "r");

  if(fin == NULL)
  {
    printf("Error creating or opening file.\n");
    return -1;
  }

  printf("Reading from file...\n");

  while(fgets(_buffer, MAX, fin))
  {
    printf("%s", _buffer);
  }
  printf("\n");
  fclose(fin);

  return 0;
}
