# include <stdio.h>
# include<math.h>
int main(){
	
	int n,digit,ld,fd;
	printf("enter your number:");
	scanf("%d",&n);
	digit =log10(n);
	ld=n%10;
	fd=n/pow(10,digit);
	printf(" first digit=%d \n last digit=%d",fd,ld);
	return 0;	
}
