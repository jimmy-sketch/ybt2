#include<iostream>
using namespace std;

int main()
{
	int ku, n;
	cin >> ku >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		if (x > ku)
			cnt++;
		else
			ku -= x;
	}
	cout << cnt << endl;
	return 0;
}