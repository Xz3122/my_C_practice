#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	printf("�п�J�T������A�ڱN���A�P�_�O�_��c���T���ΡI\n");
	printf("��J�Ĥ@����:");
	scanf("%lf",&a);
	printf("��J�ĤG����:");
	scanf("%lf",&b);
	printf("��J�ĤT����:");
	scanf("%lf",&c);
	double temp;
	if(a > b)
	{
		temp = a;a = b;b = temp;
	}
	if(b> c)
	{
		temp = b;b = c;c = temp;
	}
	if(a > b)
	{
		temp = a;a = b;b = temp;
	}
	if(a + b > c && a + c > b && b + c > a)
	{
		double s,area;
		s = (a+b+c) / 2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		
		if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2))
		{ 
			printf("���������%.2lf,%.2lf,%.2lf,���n��%.2lf�������T����",a,b,c,area);
		}
		else if(a == b && b == c &&c == a)
		{
			printf("���������%.2lf,%.2lf,%.2lf,���n��%.2lf�����T����",a,b,c,area);
		}
		else if(a == b || a == c || b == c) 
		{
			printf("���������%.2lf,%.2lf,%.2lf,���n��%.2lf�����y�T����",a,b,c,area);
		}
		else
		printf("���������%.2lf,%.2lf,%.2lf,���n��%.2lf���T����",a,b,c,area);
	}
	else
	printf("���O�T����");
}