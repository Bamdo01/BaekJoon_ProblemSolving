#include<iostream>

using namespace std;
//첫째 줄에(A + B) % C, 둘째 줄에((A% C) + (B % C)) % C, 셋째 줄에(A×B) % C, 넷째 줄에((A% C) ×(B% C)) % C를 출력한다.int main()
int main(){
	int a ,b ,c, z;

	cin >> a >> b >> c;

	z = (a + b) % c;
	cout << z << "\n";

	z = ((a % c) + (b % c)) % c;
	cout << z << "\n";

	z = (a * b) % c;
	cout << z << "\n";

	z = ((a % c) * (b % c)) % c;
	cout << z << "\n";

	
}