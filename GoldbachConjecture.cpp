#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>

using namespace std;


int arr[10001];
int brr[10000];


void check(int n);

int main() {

	for (int i = 2;i <= 10001;i++) {
		arr[i] = i;
	}

	for (int i = 2;i <= sqrt(10001);i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i + i;j <= 10001;j += i) {
			arr[j] = 0;
		}
	}

	int count = 0;
	int j = 0;
	for (int i = 2;i <= 10001;i++) {
		if (arr[i] != 0) {
			brr[j] = arr[i];
			//printf("%d\n", brr[j]);
			j++;
		}
	}
	/*for (int caset = 0; caset < 168;caset++)
	{
		printf("%d\n", brr[caset]);
	}*/
	int t;
	scanf("%d", &t);
	for (int test = 0; test < t; test++)
	{
		int n;
		scanf("%d", &n);
		check(n);
	}
}

void check(int n)
{
	int min = 10000;
	int min_i, min_j;
	for (int i = 0; brr[i] <= n-2;i++)
	{
		for (int j = i;brr[j] <= n-2;j++)
		{
			if ((n == brr[i] + brr[j])and(min > brr[j]-brr[i]))
			{
				min_i = i;
				min_j = j;
			}
		}
	}
	printf("%d %d\n", brr[min_i], brr[min_j]);
}