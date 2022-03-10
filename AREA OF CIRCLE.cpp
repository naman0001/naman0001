#include<stdio.h>
#define pi 3.14
int main()
{
	float AREA,RADIUS;
	printf("RADIUS=");
	scanf("%f",&RADIUS);
	AREA=RADIUS*RADIUS*pi;
	printf("AREA=%.3f",AREA);
	return 0;
	}
