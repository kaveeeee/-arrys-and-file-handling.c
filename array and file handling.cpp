#include<stdio.h>
int main (void)
{

	int num[]={2,3,6,5,6,8,9,10,78,10,86,71,66,77,54,58,60,81,91,78,40};
	
	int i;
	int total=0;
	int new_total;
	
	printf("count \t num\n");
	for(i=0;i<num[i];++i)
	{
		printf("%3d\t%3d\n",i+1,num[i]);
	}
	printf("\n\ndisplay = \n");
	
	for(i=0;i<num[i];++i)
	{
		printf("%d:%d,\n",i,num[i]);
		total=total+num[i];
		
	    
	}
	    new_total=total;
		printf("\n\n");
		
	printf("sum :%d",new_total);
	
	FILE* number;
	number=fopen("number.txt","w");
	
	for(i=0;i<num[i];++i)
	{
		fprintf(number,"%d  : %d\n",i,num[i]);
	}
	fclose(number);
	
	
	
	
}
