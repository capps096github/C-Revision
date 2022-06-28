// The HOD computer science intends to capture marks 
// of 10 students in two course units using a single variable.
//  write a program to implement the HOD's desire.

#include <stdio.h>

int main(void)
{
// 2 x 10 int array to capture the marks of the 2 course units 
// Capturing one COurse Unit at a time
int marks[2][10];

for(int i = 0; i < 2; i++)
{
  printf("COURSE UNIT %d MARKS: \n", i+1);
  
  for(int j = 0; j < 10; j++)
  {
    printf("Student %d: ", j+1);
    scanf("%d", &marks[i][j]);
  }

printf("\n");

}

// Print the marks on screen
printf("\n");
for(int i = 0; i < 2; i++)
{
  printf("Course unit %d: ", i+1);
  for(int j = 0; j < 10; j++)
  {
    printf("%d ", marks[i][j]);
  }
  printf("\n");
}


}