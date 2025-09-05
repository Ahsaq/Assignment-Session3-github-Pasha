#include<stdio.h>

int main()
{
    
//4.Create a program from user input an integer and print out that integer’s times table. 

int sum,number;
printf("Enter an integer : ");
scanf("%d", &number);
printf("Times %d Table\n",number);
    for (int i = 0; i <= 10 ; i++)
    {
    sum = i * number;
    printf("%d x %d = %d\n", i, number, sum);
    }
    return 0;
}





