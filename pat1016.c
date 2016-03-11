#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void main()
{
	char A[10]={'\0'};
	char B[10]={'\0'};
	char temp[10]={0};
	char temp2[10]={0};
	char a,b;
	int c,d;
	char *buf=(char*)malloc(sizeof(char));

	int i,j=0;
	scanf("%s",A);
	scanf(" %c",&a);
	scanf("%s",B);
	scanf(" %c",&b);

	for (i=0;i<strlen(A);i++)
	{
		if (A[i]==a)
		{
			temp[j]=a;
			j++;
		}
	}
	j=0;
	for (i=0;i<strlen(B);i++)
	{
		if (B[i]==b)
		{
			temp2[j]=b;
			j++;
		}
	}
	//buf=strcpy(buf,temp);
	c=atol(temp);
	d=atol(temp2);

	printf("%d",c+d);
	system("pause");
}