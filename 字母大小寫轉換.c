#include<stdio.h> 
int main()
{
	char ch = 'A'+2;//字元可做運算 = ASCLL+數字 
    char ch2; 
	printf("%c\n",ch);
	printf("Enter English:");
	scanf("%c",&ch2);
	if (ch2 >= 'a' && ch2 <= 'z')//判斷範圍是否a-z  
	  {
		printf("%c",ch2-32);
	  }
	else if(ch2 >= 'A' && ch2 <= 'Z')//判斷範圍是否A-Z
	  {
		printf("%c",ch2+32);
	  }  
	else printf("you input not English:");
	return 0;
}
