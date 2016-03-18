#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void main()
{
	char *a=(char*)malloc(sizeof(char)*1000);
	int i=0,j=0;
	int d=0;
	int len=0;
	int num[10]={0};
	//int *b=(int*)malloc(sizeof(int)*1000);
	int b[1000]={0};
	scanf("%s",a);
	len=strlen(a);
	
	for(i=0;i<len;i++)
	{
		for(d=0;d<=9;d++)
		{

		if (a[i]==d+'0')
		{
			num[d]++;
			break;
		}
		}
	}

	for(i=0;i<=9;i++)
	{
		if (num[i]!=0)
		{
			printf("%d:%d\n",i,num[i]);
		}
	}
	


	system("pause");
}