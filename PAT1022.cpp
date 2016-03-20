#include <iostream>
using namespace std;
int main()
{
	int a,b,d;
	cin>>a>>b>>d;

	int temp=a+b;
	if (temp==0)
	{
		cout<<temp;
		return 0;
	}
	int s[100];
	int i=0;
	while (temp!=0)
	{
		s[i]=temp%d;
		i++;
		temp=temp/d;
	}

	for (int j=i-1;j>=0;j--)
	{
		cout<<s[j];
	}
	system("pause");
	return 0;
}