#include <iostream>

using namespace std;
int sum(int n);

int main() {
	int num;
	cin >> num;
	int n = 1;
	int k;
	while (sum(n) < num)
	{
		n++;
	}
	k = num - sum(n-1);

	if (n % 2 == 0)
		cout << k << "/" << n - k + 1 << endl;
	else
		cout << n - k + 1 << "/" << k << endl;
	
}
int sum(int n)
{
	if (n > 1)
	{
		return n + sum(n - 1);
	}
	else
		return 1;
}