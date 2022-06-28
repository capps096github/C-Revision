#include <stdio.h>
#include <stdlib.h>
#include "cephas.c"
#include "pattern.c"
#include "numbers.c"

void firstEvenNumbers(int);

int main()
{

    // evenNumbersLessThan(20);
    firstEvenNumbers(10);
    return 0;
}

void firstEvenNumbers(int NUM)
{
    int totalNumbers = NUM * 2; //to multiply total by 2
    for (int i = 0; i <= totalNumbers; i++)
    {
        if (i % 2 == 0 && i > 0)
            printf("%d -- %d\n", (i / 2), i);
    }
}

