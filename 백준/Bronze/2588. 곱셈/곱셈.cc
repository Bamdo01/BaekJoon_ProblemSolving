#include<iostream>
#include<string>

using namespace std;
//(1)과(2)위치에 들어갈 세 자리 자연수가 주어질 때(3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
int main(){
	int a , z;
	string b ,c;

	cin >> a >> b;

	c = b[2];

	 z = stoi(c);

	z = a * z;
	cout << z << "\n";

	c = b[1];

	z = stoi(c);

	z = a * z;
	cout << z << "\n";

	c = b[0];

	z = stoi(c);

	z = a * z;
	cout << z << "\n";


	z = stoi(b);

	z = a * z;
	cout << z << "\n";


	
}