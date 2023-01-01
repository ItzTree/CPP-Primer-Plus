// arith.cpp -- c++의 산술 연산

#include <iostream>

int main()
{
    using namespace std;
    float hats, heads;          // 고정 소수점 형식으로 출력

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "수를 하나 입력하십시오: ";
    cin >> hats;
    cout << "다른 수를 입력하십시오: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}

/*
수를 하나 입력하십시오: 50.25
다른 수를 입력하십시오: 11.17
hats = 50.250000; heads = 11.170000
hats + heads = 61.419998
hats - heads = 39.080002
hats * heads = 561.292480
hats / heads = 4.498657
*/ 
