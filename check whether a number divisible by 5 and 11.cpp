#include<stdio.h>
int main (){
	int n;
	printf("enter your number :");
	scanf("%d",&n);
	if(n%5==0){
	printf("number is divisible by 5");}
		if(n%11==0)
	{printf("number is divisible by 11");}
	if (n%n==0){printf("not divisible by 5 and 11");
	}

	return 0;
	


}
