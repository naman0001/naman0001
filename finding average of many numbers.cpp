# include <stdio.h>
int main()
{
	int n,count=1;
	float x,ave,sum=0;
	printf("\t How  many numbers ?\n enter hear:");
	scanf("%d",&n);
	while(count<=n)
	{
		
		printf("enter your %d number below\n ",count);
		scanf("%f",&x);
		sum+=x;
		count++;
		
		
	}
	ave=sum/n;
	printf("ave=%f",ave);
		
	return 0;
}
