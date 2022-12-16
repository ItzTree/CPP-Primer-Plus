#include <iostream>

void simon(int);

int main()
{
    using namespace std;
    
    simon(3);
    cout << "정수를 하나 고르시오: ";
    int count;
    cin >> count;
    simon(count);
    cout << "끝!" << endl;

    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Simon 왈, 발가락을 " << n << "번 두드려라." << endl;
}

/*
Simon 왈, 발가락을 3번 두드려라.
정수를 하나 고르시오: 10 
Simon 왈, 발가락을 10번 두드려라.
끝!

<-- Content -->
사용자 정의 함수
*/
