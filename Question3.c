#include <stdio.h>
int main()
{

//3.Create a program to print table for 8 in one column
int sum;
printf("Times 8 Table\n");
for(int i = 0; i <= 10 ; i++)
{
  sum = i * 8;
  printf("%d x 8 = %d\n", i, sum);
}
    return 0;
}
