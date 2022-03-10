#include<stdio.h>
int main()
{
     int i,n,j;
     // i= rows,n=numbers,j=coloumns.
	 printf(" enter value of n=");
     scanf("%d",&n);
   printf("\n");
  for(i=0;i<n;i++)    
   {
    for(j=0;j<n;j++)
       {
     if(i==0||i+j==n-1||i==n-1)
   {
    printf("*");
     }
    else
  {
  printf(" ");
    }
     }
     printf("\n");
    }
    return 0;
}
