#include <stdio.h>
int main(){
	int n1,n2;
	
	printf("enter the values of n1:");
	scanf("%d",&n1);
	printf("enter the values of n2:");
	scanf("%d",&n2);
	
	n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
	
	printf("values of a,b are swapped n1=%d n2=%d",n1,n2);
	return 0;
}
