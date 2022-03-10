# include<stdio.h>

int cube(int num);
int cube(int num)
{

 return (num*num*num);
}
int main()
{
	int num,ans;
	printf("enter the number:");
	scanf("%d",&num);
	ans=cube(num);
	printf(" the cube of %d is:%d",num,ans);
	return 0;
}

