#include<iostream>

using namespace std;

int main() {
	int a;

	cin >> a;


	if (0 == a % 4) {
		if (0 == a % 100) {
			if (0 == a % 400) {
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
		else {
			cout << 1;
		}
	}
	else {
		cout << 0;
	}
}