#include <iostream>

using namespace std;
int hotel(int h,int w,int n);

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int h;
		int w;
		int n;
		cin >> h >> w >> n;
		cout<< hotel(h, w, n)<<endl;
	}
	}

	int hotel(int h, int w, int n)
	{
		int ans;
		int floor = n % h;
		int box = n / h +1;
		if (floor == 0)
		{
			ans = 100 * h + n/h;
		}
		else
			ans = floor * 100 + box;
		return ans;
	}
