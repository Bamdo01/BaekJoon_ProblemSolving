#include<iostream>
using namespace std;

int main() {
	int a, b, c ,d, x, r = 0;

	cin >> a;
	cin >> b;


	for (int i = 0; i < b; i++)
	{
		cin >> c >> d;

		x = c * d;

		r = x + r;

	}
	if (r == a)
	{
		cout << "Yes";

	}
	else {
		cout << "No";
	}

}