#include <iostream>
using namespace std;
int main() {
	int first, k, n;
	cin >>first>>n>> k;
	int temp;
	int *data=new int[100005];
	int *next=new int[100005];
	for (int i = 0; i < n; i++) {
		cin >> temp;
		cin >> data[temp];
		cin >> next[temp];
	}

	int *list=new int[100005];
	int sum = 0;
	while (first != -1) {
		list[sum++] = first;
		first = next[first];
	}
	int *result=new int[100005];
	for (int i = 0; i < sum; i++) {
		result[i] = list[i];
	}

	for (int i = 0; i < (sum - sum % k); i++) {
		result[i] = list[i / k * k + k - 1 - i % k];
	}

	for (int i = 0; i < sum - 1; i++)
		printf("%05d %d %05d\n", result[i], data[result[i]], result[i + 1]);
	printf("%05d %d -1", result[sum - 1], data[result[sum - 1]]);
	
	system("pause");
	free(data);
	free(next);
	free(list);
	free(result);
	return 0;
}