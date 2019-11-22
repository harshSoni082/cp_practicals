#include <stdio.h>

typedef struct student
{
  char name[100];
  int roll;
} student;

int main()
{
  student stud;

  printf("Enter name of student: ");
  scanf("%s", stud.name);
  printf("Enter Roll No.: ");
  scanf("%d", &stud.roll);

  printf("Name of student: %s \nRoll No.: %d\n", stud.name, stud.roll);

  return 0;
}
