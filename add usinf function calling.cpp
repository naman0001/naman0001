# include <stdio.h>
 int add( int num1,int num2)
 { int sum;
 	sum = num1 +num2;
return sum; 
 }
 int main()
 {
 	int sum,num1,num2;
 	printf("enter your first number:");
 	scanf("%d",&num1);
 	printf("enter your secound number:");
 	scanf("%d",&num2);
 	sum=add(num1,num2);
 	printf("your sum is :%d",sum);
 	return 0;
 	
 	
 	
 }
