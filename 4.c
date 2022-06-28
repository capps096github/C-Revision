// KTA ltd has 176 employees.
//  The KTA accountant has contacted you as the IT specialist 
// to provide a program that will help him
//  capture the name, date of birth, job, title, salary and minimum number of hours for employees. Using structure data structure,
//  write a C program to implement the request of the accountant. (8mks)

#include <stdio.h>

struct employee
{
    char name[20];
    char dob[10];
    char job[20];
    char title[20];
    int salary;
    int min_hours;
};

int main()
{
  // Capture the data of the employee
    struct employee e1;
    printf("Enter the name of the employee: ");
    scanf("%s", e1.name);
    printf("Enter the date of birth of the employee: ");
    scanf("%s", e1.dob);
    printf("Enter the job of the employee: ");
    scanf("%s", e1.job);
    printf("Enter the title of the employee: ");
    scanf("%s", e1.title);
    printf("Enter the salary of the employee: ");
    scanf("%d", &e1.salary);
    printf("Enter the minimum number of hours of the employee: ");
    scanf("%d", &e1.min_hours);
    printf("\n");

// print the employee data
printf("Here are the employee details:\n");

    printf("Name: %s\n", e1.name);
    printf("Date of birth: %s\n", e1.dob);
    printf("Job: %s\n", e1.job);
    printf("Title: %s\n", e1.title);
    printf("Salary: %d\n", e1.salary);
    printf("Minimum number of hours: %d\n", e1.min_hours);  
    return 0;

}