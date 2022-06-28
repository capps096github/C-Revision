// The academic registrar intends to output 8 student names to a console using a single variable. 
// write a program to output the desired result.

#include <stdio.h>

int main(void)
{
  // An Array of the student names
  char student[8][20] = { "John Smith", "Jane Doe", "Joe Bloggs", "John Smith", "Jane Doe", "Joe Bloggs", "John Smith", "Jane Doe" };
  
  // integer to keep track of the number of students
  int i;

// Printing out the array of student names
  for (i = 0; i < 8; i++)
  {
    printf("%s\n", student[i]);
  }

  return 0;
}
