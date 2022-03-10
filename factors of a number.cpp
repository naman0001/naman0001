#include<stdio.h>
int main(){
	int n,i;
	printf("enter your number:");
	scanf("%d",&n);
	printf("factor of %d:\t",n);
	for(i=1;i<=n;i++){
		
		if(n%i==0)
		{printf("%d,\t",i);
				}	
				else;	
		
	}
	return 0;
}
