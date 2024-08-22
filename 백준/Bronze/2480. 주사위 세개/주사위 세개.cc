#include<iostream>
using namespace std;
int main() {

	int a, b, c, r;

	cin >> a >> b >> c;

	if (a == b && a == c)
	{
		r = 10000 + a * 1000;
		cout << r;

	}
	else if (a == b or a == c or b == c) {

		if (a == b)
		{
			r = 1000 + a * 100;
			cout << r;
		}
		else if(a == c)
		{
			r = 1000 + a * 100;
			cout << r;
		}
		else {
			r = 1000 + b * 100;
			cout << r;
		}

	}
	else {
		if (a > b && a > c) {
			r = a * 100;
			cout << r;
		}
		else if (b > c)
		{
			r = b * 100;
			cout << r;
		}
		else
		{
			r = c * 100;
			cout << r;
		}
	}

}