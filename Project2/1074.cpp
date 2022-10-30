#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	int mom=0;
	for (int i = 1; i <= 12; i++)
	{
		sum += 300;
		int yusuan;
		cin >> yusuan;
		if (yusuan > sum)
		{
			cout << "-" << i << endl;
			return 0;
		}
		sum = sum - yusuan;
		if (sum >= 100)
		{
			mom += 100 * (sum / 100);
			sum -= 100 * (sum / 100);
		}
	}
	cout << sum + mom * 1.2 << endl;
}