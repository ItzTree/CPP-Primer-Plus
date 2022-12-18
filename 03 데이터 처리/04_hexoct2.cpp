// hexoct2.cpp -- 값을 16진수와 8진수로 디스플레이한다.

#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "가슴 둘레 " << chest << " (10진수)" << endl;
    cout << hex;            // 진법을 바꾸는 조정자
    cout << "허리 둘레 " << waist << " (16진수)" << endl;
    cout << oct;            // 진법을 바꾸는 조정자
    cout << "인심 길이 " << inseam << " (8진수)" << endl;

    return 0;
}

/*
가슴 둘레 42 (10진수)
허리 둘레 2a (16진수)
인심 길이 52 (8진수)
*/
