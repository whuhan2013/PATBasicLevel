/*#include "stdio.h"
#include "stdlib.h"
void GameResult(int a[])
{
	if (a[0]>=a[1]&&a[0]>=a[2])
	{
		printf("B");
	}else if(a[1]>=a[0]&&a[1]>=a[2])
	{
		printf("C");
	}else
	{
		printf("J");
	}
}
void main()
{
	int n;
	int i;
	char c;
	char d;
	int win[2]={0},lose[2]={0},pin[2]={0};
	int a[3]={0};
	int b[3]={0};
	scanf("%d",&n);
	//c=(char*)malloc(sizeof(char)*n);
	//d=(char*)malloc(sizeof(char)*n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%c %c",&c,&d);
		if (c==d)
		{
			pin[0]++;
			pin[1]++;
		}else if(c=='C'&&d=='J'
			||c=='J'&&d=='B'
			||c=='B'&&d=='C')
		{
			win[0]++;
			lose[1]++;
			if (c=='B')
			{
				a[0]++;
			}else if (c=='C')
			{
				a[1]++;
			}else
			{
				a[2]++;
			}
		}else
		{
			win[1]++;
			lose[0]++;
			if (d=='B')
			{
				b[0]++;
			}else if (d=='C')
			{
				b[1]++;
			}else
			{
				b[2]++;
			}
		}
	}

	printf("%d %d %d\n",win[0],pin[0],lose[0]);
	printf("%d %d %d\n",win[1],pin[1],lose[1]);
	GameResult(a);
	printf(" ");
	GameResult(b);
	system("pause");
}

*/