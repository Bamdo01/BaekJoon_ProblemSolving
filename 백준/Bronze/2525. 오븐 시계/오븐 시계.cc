#include <iostream>
using namespace std;
int main() {

	int h, m, c ,z;

	cin >> h >> m;
	cin >> c;

	m = m + c;
	if (m >= 60)
	{
		z = m / 60;
		m = m % 60;
		h = h + z;

		if (h >= 24) {
			h = h - 24;
		}

		cout << h<<" " << m;
	 }
	else
	{
		cout << h <<" " << m;
	}


}