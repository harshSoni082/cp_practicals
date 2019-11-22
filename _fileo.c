#include <stdio.h>

int main()
{
  char *str;
  FILE *fout = fopen("file_io.dat", "w+");

  if(fout == NULL)
  {
    printf("Error creating or opening file.\n");
    return -1;
  }

  printf("Enter a string to write in file: ");
  gets(str);

  fputs(str, fout);
  fclose(fout);

  return 0;
}
