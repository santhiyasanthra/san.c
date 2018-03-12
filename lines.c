#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[78];
int count=1,i;
scanf("%[^\n]c",&name);
for(i=0;name[i]!='\0';i++)
{
if(name[i]=='.')
{
			count++;
}
		
}
printf("%d",count);
getch();
}
