# include <stdio.h>
int main()
{
	int n,count=1;
	float x,AVERAGE,sum=0;
	printf("\t How  many numbers you want AVERAGE  for ?\n enter hear:");
	scanf("%d",&n);
	while(count<=n)
	{
		
		printf("enter your %d number below : \n ",count);
		scanf("%f",&x);
		sum+=x;
		count++;
		
		
	}
	AVERAGE=sum/n;
	printf("AVERAGE=%.3f",AVERAGE);
		
	return 0;
}
