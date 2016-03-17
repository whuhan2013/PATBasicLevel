#include "stdio.h"
#include "stdlib.h"
void sort(int mynumber[],int n)
{
	int i,j;
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (mynumber[i]<mynumber[j])
			{
				temp=mynumber[i];
				mynumber[i]=mynumber[j];
				mynumber[j]=temp;
			}
		}
	}
}

void changeToArray(int i,int data[])
{
	int j;

	for(j=0;j<4;j++)
	{
		data[j]=i%10;
		i=i/10;
	}

}
void main()
{

	int i,j;
	int bigger,smaller;
	int data[4];
	int len;
	scanf("%d",&i);
	changeToArray(i,data);

	if (data[0]==data[1]&&data[1]==data[2]&&data[2]==data[3])
	{
		printf("%d - %d = 0000\n",i,i);
	}else
	{
		len=sizeof(data)/sizeof(data[0]);
		sort(data,len);
		while (1)
		{
			bigger=data[0]*1000+data[1]*100+data[2]*10+data[3];
			smaller=data[3]*1000+data[2]*100+data[1]*10+data[0];

			i=bigger-smaller;

			for(j=0;j<4;j++)
			{
				printf("%d",data[j]);
			}
			printf(" - ");
			for(j=3;j>=0;j--)
			{
				printf("%d",data[j]);
			}
			printf(" = ");
			//printf("%d",i);
			if (i>=1000)
			{
			printf("%d\n",i);
			}else if (i>=100)
			{
			printf("0%d\n",i);
			}else if (i>=10)
			{
			printf("00%d\n",i);
			}else
			{
			printf("000%d\n",i);
			}

			if (i==6174)
			{
				break;
			}
			changeToArray(i,data);
			sort(data,len);
		}
	}

	system("pause");
}