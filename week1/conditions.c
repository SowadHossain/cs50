#include <stdio.h>

int is_even(int);
int is_positive(int);
int count_down(int);

int main(void)
{
    int num;

    printf("give me a number");
    scanf("%i", &num);

    if (is_even(num))
        printf("the number is even\n");
    else
        printf("the number is odd\n");

    if(is_positive(num))
        printf("the number is a positive number\n");
    else
        printf("the number is negetive\n");

    count_down(num);   
}

int is_even(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int is_positive(int n)
{
    if (n < 0)
        return 1;
    else
        return 0;
}

int count_down(int n){
    for (int i=n;i>=0;i--){
        printf("%i\n",i);
    }
}