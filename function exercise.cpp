# include <stdio.h>
 int main()
{
	
	int a,*p;
	p=&a;
	printf("enter your number:");
	scanf("%d",&a);
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",p);
	printf("%d\n",&p);
	printf("%d\n",*p);
	return 0;
}
