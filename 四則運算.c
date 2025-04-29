#include<stdio.h>
int main()
{
	double n1,n2;
	char op;
	printf("Enter two number\nFirst number:");
	scanf("%lf",&n1);
	printf("Second number:");
	scanf("%lf",&n2);
    printf("Enter(+,-,*,/):");
    scanf(" %c",&op);
    if(op == '+')
    {
    	printf("%.1lf + %1.lf = %.1lf",n1,n2,n1 + n2);
	}
	else if(op == '-')
    {
    	printf("%.1lf - %.1lf = %.1lf",n1,n2,n1 - n2);
	}
	else if(op == '*')
    {
    	printf("%.1lf * %.1lf = %.1lf",n1,n2,n1 * n2);
	}
	else if(op == '/')
    {
    	printf("%.1lf / %.1lf = %.1lf",n1,n2,n1 / n2);
	}
	else
	printf("Nothing");
} 