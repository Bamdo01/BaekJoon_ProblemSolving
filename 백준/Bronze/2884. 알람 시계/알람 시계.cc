#include<iostream>
using namespace std;
int main() {
	int H, M , z;
		cin >> H >> M;
			if (H == 0) {

				if (M < 45)
				{
					H = 23;
					z = M - 45;

					M = 60 + z;

					cout << H << " " << M;
				}
				else {

					cout << H << " " << M - 45;
				}
			}
			else {
				if (M < 45)
				{

					H = H - 1;
					z = M - 45;

					M = 60 + z;

					cout << H << " " << M;
				}
				else {
					cout << H << " " << M - 45;
				}
			}

}
