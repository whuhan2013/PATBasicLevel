#include "stdio.h"
#include "stdlib.h"
#include "string.h"
char *Week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int isdigit(char s)
{
	if (s>='0'&&s<='9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isalpha(char s)
{
	if (s>='a'&&s<='z')
	{
		return 1;
	}else
	{
		return 0;
	}
}
int minlen(char *s1,char *s2)
{
	if (strlen(s1)>=strlen(s2))
	{
		return strlen(s2);
	}else
	{
	   return strlen(s1);
	}
}
void main()
{
	char *myString[4];
	int i;
	char *DAY=(char*)malloc(sizeof(char));
	int HH;
	int MM;
	int cnt=0;
	//DAY HH:MM
	for(i=0;i<4;i++)
	{
		myString[i]=(char*)malloc(sizeof(char));
		scanf("%s",myString[i]);
	}

	for(i=0;i<minlen(myString[0],myString[1]);i++)
	{
		//printf("%c",myString[0][i]);
		if(myString[0][i]==myString[1][i])
		{
			if(!cnt&&myString[0][i]>='A'&&myString[0][i]<='G')
			{
				DAY=Week[myString[0][i]-'A'];
				++cnt;
			}
			else if(cnt && (myString[0][i]>='A'&&myString[0][i]<='N'||isdigit(myString[0][i])))
			{
				if(isdigit(myString[0][i])) HH=myString[0][i]-'0';
				else HH=myString[0][i]-'A'+10;
				break;
			}
		}
	}

	for(i=0;i<minlen(myString[2],myString[3]);i++)
	{
		if (myString[2][i]==myString[3][i]&&isalpha(myString[2][i]))
		{
			MM=i;
			break;
		}
	}

	printf("%s ",DAY);
	if (HH/10)
	{
		printf("%d:",HH);
	}else
	{
		printf("0%d:",HH);
	}

	if (MM/10)
	{
		printf("%d\n",MM);
	}else
	{
		printf("0%d\n",MM);
	}
	/*for (i=0;i<4;i++)
	{
	free(myString[i]);
	}*/
	//free(DAY);
	system("pause");
	return;

}
