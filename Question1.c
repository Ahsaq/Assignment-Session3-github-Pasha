
// Question: Create a program to decide, is the input number is an even or odd number.  

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main(){

int number,test_case;
printf("\nEnter number of testcase: ");
scanf("%d",&test_case);
int arr[test_case];
for (int i = 0; i < test_case; i++)
{
  scanf("%d",&number);
  arr[i]=number;
}
for (int  i = 0; i < arr[i]; i++)
{
  if (arr[i]%2 == 0)
  {
    printf("Even ");
  }
  else if (arr[i]%2 != 0)
  {
    printf("Odd ");
  }  
}




return 0;
}