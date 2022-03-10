# include <stdio.h>
# include <math.h>
int main (){
	
float value,x,y;
printf("enter your number:",value);
scanf("%f",&value);
printf("your greatest integer value of the number is : %.2f\n",ceil (value));
printf(" your largest integer value of the number is : %.2f\n",floor( value));
printf("enter the number u want to square:",x);
scanf("%f",&x);
printf(" square of the number is:%.2f\n",pow(x,2));
printf("enter the number u want to find log:",y);
scanf("%f",&y);
printf("your log is:%.2f",log10(y));
return 0;
}
