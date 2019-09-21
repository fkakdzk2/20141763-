#include <iostream>

using namespace std;
int eureka(int n);
int arr[45];
int main() {
	int h;
	cin >> h;
	for (int i = 0; i < sizeof(arr);i++)
	{
		arr[i] = (i + 1)*(i + 2) / 2;
	}
	for (int i = 0; i < h; i++)
	{
		int n;
		cin >> n;
		cout << eureka(n) << endl;
	}
}

int eureka(int n)
{
	int limit;
	for (int i = 0; i < sizeof(arr);i++)
		if (arr[i] > n)
		{
			limit = i;
			break;
		}
	for (int i = 0; i<limit; i++)
		for(int j = 0; j < limit; j++)
			for (int k = 0; k < limit; k++)
			{
				if (arr[i] + arr[j] + arr[k] == n)
				{
					cout << i <<" " << j << " " << k << " " << endl;
					return 1;
				}
			}
	return 0;
}