# include<stdio.h>
int main()
{
	int i,j,rows;
	printf("numbers of rows=");
	scanf("%d",&rows);
	for(i=rows;i>=1;++i){
    	for(j=rows;j>=i;--j){
	 printf("# ");
	}
	 printf("\n");
    }
	return 0;
}    
