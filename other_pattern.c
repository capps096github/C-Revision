#include <stdio.h>

void arrowNew(),
    arrowx(), inverted();

int main()
{

  arrowx(); //|> pattern
  // arrowNew();
  // inverted();
  return 0;
}

void inverted()
{

  for (int x = 0; x < 5; x++)
  {
    printf("*");
    //printf("\n");
    //for(int x = 0;x<3;x++,printf("*"));
  }
  printf("\n ");
  for (int x = 0; x < 3; x++, printf("*"))
    ;
  printf("\n  ");
  for (int x = 0; x < 1; x++, printf("*"))
    ;
  printf("\n");
}

void arrowNew()
{
  printf("Arrow Exercise\n");
  //1st
  for (int x = 0; x < 5; x++)
  {
    for (int y = 0; y < x; y++, printf("*"))
      ;
    printf("\n");
  }
  //2nd
  for (int x = 5; x > 0; x--)
  {
    for (int sp = x - 2; sp > 0; sp--, printf("*"))
      ;
    printf("\n");
  }
}

void arrowx()
{
  //outer loop
  for (int x = 0; x < 8; x++)
  {
    //for x <= 4
    if (x <= 4)
      for (int y = 0; y < x; y++)
      {
        printf("*");
      }

    //for x > 4
    else
      for (int y = 8 - x; y > 0; y--)
      {
        printf("*");
      }
    //new line
    printf("\n");
  }
}