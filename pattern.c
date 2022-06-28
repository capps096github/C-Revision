#include <stdio.h>

// *********
// *********
// *********
void forLoopPattern()
{

  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 3; y++)
    {
      printf("***");
    }
    printf("\n");
  }
}

// *********
// *********
// *********
void forDoWhilex()
{

  for (int i = 0; i < 3; i++)
  {
    int y = 0;

    do
    {
      printf("***");
      y++;
    } while (y < 3);

    printf("\n");
  }
}

// *
// **
// ***
// ****
// ***
// **
// *
// arrowIos() is the best of them all

void triangularFor()
{
  // *
  // **
  // ***
  for (int t = 0; t < 3; t++)
  {
    for (int y = 0; y < t; y++)
      printf("*");
    printf("*\n");
  }

  // ****
  // ***
  // **
  // *
  for (int t = 3; t > 0; t--)
  {

    for (int y = t; y > 0; y--)
      printf("*");
    printf("*\n");
  }
  printf("*");
}

// *****
//  ***
//   *
void inversion()
{
  for (int y = 0, x = 5; y < 3; y++, x -= 2)
  {
    if (x <= 3)
    {
      for (int i = 0; i < y; i++)
        printf(" ");
    }

    for (int z = x; z > 0; z--)
      printf("*");

    printf("\n");
  }
}

// ****
// ****
// ****
// ****
// ****
// ***
// **
// *

void spearArrow()
{

  for (int i = 0; i < 8; i++)
  {

    if (i <= 4)
    {
      for (int j = 0; j < 4; j++)
        printf("*");
    }
    else
    {
      for (int x = 8 - i; x > 0; x--)
        printf("*");
    }
    printf("\n");
  }
}

// *
// **
// ***
// ****
// ***
// **
// *
void arrowIos()
{

  for (int i = 0; i < 8; i++)
  {

    if (i <= 4)
    {
      for (int j = 0; j < i; j++)
        printf("*");
    }
    else
    {
      for (int x = (8 - i); x > 0; x--)
        printf("*");
    }
    printf("\n");
  }
}
void arrowIosWhile()
{

  int i = 0;
  while (i < 8)
  {

    if (i <= 4)
    {
      for (int j = 0; j < i; j++)
        printf("*");
    }
    else
    {
      for (int x = (8 - i); x > 0; x--)
        printf("*");
    }
    printf("\n");
    i++;
  }
}