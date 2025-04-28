#include <stdio.h>

int main()
{   
    int number,sum;
    printf("Enter number1: ");
    scanf("%d", &number);
    sum = number;             
    printf("Enter number2: ");
    scanf("%d", &number);
    sum += number;           
    printf("Enter number3: ");
    scanf("%d", &number);
    sum += number;           
    printf("add = %d\n", sum);
    return 0;
}
