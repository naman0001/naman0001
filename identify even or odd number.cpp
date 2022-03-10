# include<stdio.h>
int main(){
	
	int n,odd,even;
	printf("enter your number:");
	scanf("%d",&n);
	even=n%2;
	if(even==0)
	{
	printf("%d is  even number.",n);
	}
	else
	printf("%d is odd number.",n);
	return 0;
	}
