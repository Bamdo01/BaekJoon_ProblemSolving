#include <iostream>


using namespace std;
int main()
{
	int a, b;

	cin >> a;

	for (int i = 1; i <= 9; i++) {
		
		b = a * i;

		cout << a << " * " << i<< " = " << b << "\n";
				
	}
}

