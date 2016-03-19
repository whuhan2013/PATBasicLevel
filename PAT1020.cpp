#include <iostream>
#include <algorithm>
using namespace std;

struct moonCake
{
	float price;
	float stoke;
	float avergeprice;
};
int cmp(moonCake a,moonCake b)
{
	return a.avergeprice>b.avergeprice;
}
int main()
{
	int n;
	cin>>n;
	int need;
	cin>>need;
	moonCake *mc=new moonCake[n];


	for (int i=0;i<n;i++)
	{
		cin>>mc[i].stoke;
	}

	for(int i=0;i<n;i++)
	{
		cin>>mc[i].price;
	}

	for (int i=0;i<n;i++)
	{
		mc[i].avergeprice=mc[i].price/mc[i].stoke;
	}

	sort(mc,mc+n,cmp);

	float result=0.0;
	for (int i=0;i<n;i++)
	{
		if (mc[i].stoke<need)
		{
			result+=mc[i].price;
		}else
		{
			result+=mc[i].price*need/mc[i].stoke;
			break;
		}

		need-=mc[i].stoke;
	}

	printf("%.2f",result);
	return 0;
}