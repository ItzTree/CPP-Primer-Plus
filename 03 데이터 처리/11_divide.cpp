// divide.cpp -- 정수 나눗셈과 부동 소수점수 나눗셈

#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "정수 나눗셈: 9/5 = " << 9 / 5 << endl;
    cout << "부동 소수점수 나눗셈: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "혼합 나눗셈: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double형 상수: 1e7/9.0 = " << 1e7 / 9.0 << endl;
    cout << "float형 상수: 1e7f/9.0f = " << 1e7f / 9.0f << endl;
    return 0;
}

/*
정수 나눗셈: 9/5 = 1
부동 소수점수 나눗셈: 9.0/5.0 = 1.800000
혼합 나눗셈: 9.0/5 = 1.800000
double형 상수: 1e7/9.0 = 1111111.111111
float형 상수: 1e7f/9.0f = 1111111.125000
*/ 
