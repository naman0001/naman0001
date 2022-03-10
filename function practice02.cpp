# include<stdio.h>
float dia(float num);
float cir(float num);
float are(float num);
int main(){
	float num,diameter, circumference,area,pi=3.14;
	printf("enter the radius of circle:");
	scanf("%f",&num);
	
	diameter= dia( num);
	circumference= cir(  num);
	area=are( num);
	printf("1.DIAMETER:%f\n 2.circumference:%f\n 3.area:%f",diameter,circumference,area);
	return 0;
}

float dia(float num)
{return(2*num);}
float cir(float num)
{ int pi=3.14;
return(2*pi*num);}
float are(float num)
{
int pi=3.14;
return(pi*num*num);}
