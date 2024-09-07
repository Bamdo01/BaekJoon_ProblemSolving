#include<iostream>
using namespace std;

int main()
{
	int* a= new int[28];
	for (int i = 0; i < 28; i++)
	{
		cin >> a[i];
	}



	for (int i = 1; i <= 30; i++)
	{
		bool c = false;
		for (int z = 0; z < 28; z++)
		{		
			//입력한 값이 i 와 같다면 변수 c true로 변환
			if(i == a[z])
			{
				c = true;
			}

		}
		if (!c)
		{
			cout << i << '\n';
		}
		
		
	}

}