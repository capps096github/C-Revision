#include <stdio.h>

// Even Numbers
// void evenNumbers()
// {
//     for (int i = 0; i < 100; i += 2)
//     {
//         printf("%d\n", i);
//     }
// }

void evenNumbersLessThan(int NUM)
{
  char *suffix;
  for (int i = 0; i < NUM; i++)
  {

    suffix = (i == 1) ? "st" : "th";

    if (i % 2 == 0 && i > 0)
    {
      printf("%d %s: %d\n", (i / 2), suffix, i);
    }
  }
}


void oddNumbers()
{
  char *suffix;
  for (int i = 0; i < 100; i++)
  {

    suffix = (i == 1) ? "st" : "th";

    if (i % 2 != 0)
    {
      printf("%d%s: %d\n", (i / 2) + 1, suffix, i);
    }
  }
}
