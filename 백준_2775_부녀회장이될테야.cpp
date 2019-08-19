#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	int arr[15][15] = {0,};
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (i == 0)
				arr[i][j] = j + 1;
			else
			{
				for (int k = 0; k <= j; k++)
				{
					arr[i][j] += arr[i - 1][k];
				}
			}
		}
	}


	for (int i = 0; i < t; i++)
	{
		int k;
		int n;
		cin >> k >> n;
		cout << arr[k][n-1]<< endl;
	}
	return 0;
}
