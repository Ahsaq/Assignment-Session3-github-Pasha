#include <stdio.h>
int main()
{

//5.Create a program that will ask the user to give three integers. Call these integers start, step_by and stop. 

int num, num1, num2;
printf("Enter three integers : ");
scanf("%d %d %d", &num, &num1, &num2);
    
    while(num<=num2){
    printf("%d ",num);
    num=num+num1;
    }

printf("\nPress any key to continue . . . ");
    return 0;
}
