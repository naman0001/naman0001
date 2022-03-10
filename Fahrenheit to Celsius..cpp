//1.	To convert temperature from Fahrenheit to Celsius.

# include<stdio.h>
int main(){
	
 float 	celsius,Fahrenheit;
 printf("enter your temperature in Fahrenheit: ");
	scanf("%f",&Fahrenheit);
	celsius=(Fahrenheit-32)*5/9;
	printf(" temperature in celsius : %f",celsius);
	return 0;
	
	
	
	
}
