#include <stdio.h>
#include<conio.h>
void main()
{
int t1=0,t2=1,k,n,i;
scanf("%d",&k);
for(i=0;i<=k;i++)
{
	n=t1+t2;
	t1=t2;
	t2=n;
	printf("%d\t",n);
}
getch();
}
