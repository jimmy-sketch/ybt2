#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		double x, y;
		int people;
		cin >> x >> y >> people;
		double dist = sqrt(x * x + y * y);
		dist = dist * 2;
		double thistime = people * 1.0 + dist / 50 * 1.0 + people * 0.5;
		sum += thistime;
	}
	cout << ceil(sum) << endl;
	return 0;
}