#include <stdio.h>
int main()
{

//2. Create a program to print number sequence from 5 to 15 (multiples of 3) with repetition
for (int i = 5; i < 15; i++)
{
  if (i%3 == 0)
  {
    printf("%d ", i);
  }
}
    return 0;
}
