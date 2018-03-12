#include <stdio.h>
#include<coniio.h>
#include<string.h>
void main()
{
	char name[78];
	int a,count=0,i;
	scanf("%[^\n]s",&name);
	a=strlen(name);
	for(i=0;i<=a;i++)
	{
		if(isalpha(name[i]))
		{
		count++;
		}
	}
	printf("%d",count);

	getch();
}
