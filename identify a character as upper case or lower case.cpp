# include<stdio.h>
int main()
{
	int x;
	char ch;
	printf("enter your character below:\n hear:-");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z')
	{printf("\t '%c' is a lower case character.",ch);}
	else
	if(ch>='A'&&ch<='Z')
	{printf("\t '%c' is a upper case character.",ch);}

else
printf(" %d not  a valid input",x);

if(ch=='a'||ch=='e'||ch=='i'||
ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u')
{printf("\t %c is also a vowal.",ch);} 
else
printf("\t  %c is a consonent.",ch);
	
	return 0;
	
	
}
