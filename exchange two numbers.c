#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	int temp = n1;//開一個房間叫temp，並把n1的數送入temp
	n1 = n2;//用n2的數去置換n1的數
	n2 = temp;//用temp的數去置換n2的數 
	printf("number 1 = %d�Anumber 2 = %d\n",n1,n2);
	
	/*第二種寫法 */
	int n3,n4;
	printf("Enter number 3:");
	scanf("%d",&n3);
	printf("Enter number 4:");
	scanf("%d",&n4);
	n3 = n3 + n4;//n3 = (n3+n4) , n4 = n4
	n4 = n3 - n4;//n4 = [(n3+n4) - n4] , n3 = (n3+n4)
	n3 = n3 - n4;//n3 = (n3+n4) - [(n3+n4) - n4] , n4 = [(n3+n4) - n4] 
	printf("number 3 = %d�Anumber 4 = %d",n3,n4);
	return 0;
}
