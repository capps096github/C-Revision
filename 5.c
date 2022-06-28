// The senior class teacher wants to capture the name, date of birth, weight, nationality, and English marks of a pupil using a structure data type. write a program to implement the class teacher's desire.

#include <stdio.h>


#include <stdio.h>

struct pupil
{
    char name[20];
    char dob[10];
    int weight;
    char nationality[20];
    int englishMarks;
};

int main()
{
  // Capture the data of the pupil
    struct pupil e1;
    printf("Enter the name of the pupil: ");
    scanf("%s", e1.name);
    printf("Enter the date of birth of the pupil: ");
    scanf("%s", e1.dob);
       printf("Enter the weight of the pupil: ");
    scanf("%d", &e1.weight);
    printf("Enter the nationality of the pupil: ");
    scanf("%s", e1.nationality);

 
    printf("Enter the English Marks of the pupil: ");
    scanf("%d", &e1.englishMarks);
    printf("\n");

// print the pupil data
printf("Here are the pupil details:\n");

    printf("Name: %s\n", e1.name);
    printf("Date of birth: %s\n", e1.dob);
    printf("Nationality: %s\n", e1.nationality);
    printf("Weight: %d\n", e1.weight);
    printf("English Marks: %d\n", e1.englishMarks);  
    return 0;

}