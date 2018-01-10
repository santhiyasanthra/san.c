#include <stdio.h>

int main(void)
{
	int i,j,k;
	
	scanf("%d %d %d",&i,&j,&k);
	printf("enter the three numbers%d %d %d",i,j,k);
	if(i>j && i>k)
	{
		printf("\n %d is the largest among three",i);
		
	}
	if(j>i && j>k)
	{
		printf("\n %d is the largest among three",j);
	}
	if(k>i && k>j)
	{
		printf("\n %d is the largest among three",k);
	}
	
	
}
getch();
