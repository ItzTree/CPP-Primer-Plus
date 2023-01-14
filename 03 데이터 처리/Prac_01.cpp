#include <iostream>

int main()
{
    using namespace std;
    cout << "키: ___\b\b\b";

    int height;
    cin >> height;
    const int m = height / 100;
    const int cm = height % 100;

    cout << "키는 " << m << "m " << cm << "cm입니다." << endl;
    return 0;   
}

/*
키: ___

[ 입력 후 ]
키: 170
키는 1m 70cm입니다.
*/
