#include "iostream"
#include "string.h"
using namespace std;

int main()
{

	int num;
	int max;
	int end=0;
	char s;
	cin>>num>>s;
	int result=1;
	if (num<7)
	{
		printf("%c\n",s);
		cout<<num-1;
		system("pause");
		return 0;
	}
	for (int i=3;result<=num;i=i+2)
	{
		result=result+2*i;
		max=i;
		if (num-result>=0)
		{
			end=num-result;
		}
	}
	max=max-2;
	int empty=max/2;
	int j=0;
	int j2=max;
	for (int i=0;i<=max/2;i++)
	{
		for (int temp=0;temp<j;temp++)
		{
			printf(" ");
		}
		
		for (int temp=max-j*2;temp>0;temp--)
		{
			printf("%c",s);
		}
		j++;
		printf("\n");
	}
	j=j-2;
	for (int i=0;i<max/2;i++)
	{
		for (int temp=0;temp<j;temp++)
		{
			printf(" ");
		}

		for (int temp=max-j*2;temp>0;temp--)
		{
			printf("%c",s);
		}
		j--;
		printf("\n");
	}
	
	cout<<end;
	system("pause");
	return 0;
}