#include<stdio.h>
#include<time.h>
int main()
{
	int n;
	int count = 0;
	srand(time(0));
	int guess = rand() % 100 + 1;
	printf("Let's guess number!\nEnter your number(1~100):");
	scanf("%d",&n);
	while(n != guess)
	{   
	    if(n > 100 || n < 1)
	    {
	    	 printf("Please enter 1~100:");
	    	 scanf("%d",&n);
	    	 count == 0;
	    	 continue;
		}
	    if(n > guess)
		printf("Your number is too large\n");
		else
		printf("Your number is too samll\n");
		printf("Enter your number(1~100):");
	    scanf("%d",&n);
	    count += 1;
	}
	printf("Congratulations!You win!You guess %d rond",count);
    return 0; 
} 