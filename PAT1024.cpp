#include <iostream>
#include "string"
using namespace std;

int main()
{

	string s;
	int pose;
	cin>>s;
	int len=s.length();
	if (s[0]=='-')
	{
		cout<<'-';
	}

	for (int i=1;i<len;i++)
	{
		if (s[i]=='E')
		{
			pose=i;
		}
	}
	int after=0;
	for (int i=pose+2;i<len;i++)
	{
		after=(s[i]-'0')+10*after;
	}
	if (s[pose+1]=='-')
	{
		cout<<'0';
		cout<<'.';
		for (int i=1;i<after;i++)
		{
			cout<<'0';
		}

		for (int i=1;i<pose;i++)
		{
			if (i==2)
			{

			}else
			{
				cout<<s[i];
			}
		}
	}

	if (s[pose+1]=='+')
	{
		if (after>=pose-3)
		{
			for (int i=1;i<pose;i++)
			{
				if (i==2)
				{

				}else
				{
					cout<<s[i];
				}
			}

			for (int i=after-(pose-3);i>0;i--)
			{
				cout<<'0';
			}
		}

		else
		{
			for (int i=2;i<after+2;i++)
			{
				s[i]=s[i+1];
			}
			s[after+2]='.';

			for(int i=1;i<pose;i++)
			{
				cout<<s[i];
			}
		}
	}

	system("pause");
	return 0;

}