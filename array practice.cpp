# include <stdio.h>
int main()
{
	int s[4],i;
	printf(" enter the marks for students.\n\n");
	for(i=0;i<4;i++)
	{
		printf(" enter the marks for %d student :\n",i+1);
		scanf("%d",&s[i]);
	}
	printf(" --------------the marks for students are-------------\n");
	for(i=0;i<4;i++)
{
	printf(" for %d student marks is:%d\n",i+1,s[i]);
}
	
	return 0;	
}
