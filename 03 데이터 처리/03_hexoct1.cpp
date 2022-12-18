// hexoct1.cpp -- 16진 정수형 상수와 8진 정수형 상수를 보여 준다

#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "가슴 둘레 " << chest << "\n";
    cout << "허리 둘레 " << waist << "\n";
    cout << "인심 길이 " << inseam << "\n";

    return 0;
}

/*
가슴 둘레 42
허리 둘레 66
인심 길이 34
*/
