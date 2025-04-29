#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	printf("請輸入三個邊長，我將幫你判斷是否能構成三角形！\n");
	printf("輸入第一個邊:");
	scanf("%lf",&a);
	printf("輸入第二個邊:");
	scanf("%lf",&b);
	printf("輸入第三個邊:");
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
			printf("此為邊長為%.2lf,%.2lf,%.2lf,面積為%.2lf的直角三角形",a,b,c,area);
		}
		else if(a == b && b == c &&c == a)
		{
			printf("此為邊長為%.2lf,%.2lf,%.2lf,面積為%.2lf的正三角形",a,b,c,area);
		}
		else if(a == b || a == c || b == c) 
		{
			printf("此為邊長為%.2lf,%.2lf,%.2lf,面積為%.2lf的等腰三角形",a,b,c,area);
		}
		else
		printf("此為邊長為%.2lf,%.2lf,%.2lf,面積為%.2lf的三角形",a,b,c,area);
	}
	else
	printf("不是三角型");
}