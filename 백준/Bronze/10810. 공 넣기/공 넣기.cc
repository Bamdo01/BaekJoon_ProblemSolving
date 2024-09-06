#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, k;

    //바구니 크기 와 공을 몇번 넣을지 입력
    cin >> n >> m;

    //바구니 배열 동적 할당 인덱스 번호 + 1이 바구니의 번호
    int* array = new int[n];

    for(int i=0; i < n; i++)
    {
        array[i] = 0;
    }

    for (int z = 0; z < m; z++)
    {
        cin >> i >> j >> k;
        for (i; i <= j; i++)
        {
            array[i-1] = k;
        }

    }

    for (int x = 0; x < n; x++)
    {
        cout << array[x] << " ";
    }

    

   

}
