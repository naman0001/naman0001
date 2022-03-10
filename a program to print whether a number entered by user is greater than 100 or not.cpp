# include <stdio.h>
int main()
{
	int  n ;
	printf("enter your number:");
	scanf("%d",&n);
	if(n<=100&&n>0)
	{
		printf(" the number %d is smaller than 100.",n);}
	 else
	 if(n<=0)
		{printf(" %d is negative .",n);
		}
	else
		printf("the number is greater than 100.");
		return 0;
		}
