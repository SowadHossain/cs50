#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1 ,num2; 
    printf("first number: ");
    scanf("%i",&num1);
    printf("second number:");
    scanf(" %i",&num2);
    int sum = num1+num2;
    printf("sum of the numbers are %i",sum);
    
}
