// chartype.cpp -- char형

#include <iostream>

int main()
{
    using namespace std;
    char ch;                // char형 변수를 선언한다

    cout << "원하는 문자 하나를 입력하시오: ";
    cin >> ch;
    cout << "당신이 입력한 문자는 " << ch << " 입니다." << endl;

    return 0;
}

/*
원하는 문자 하나를 입력하시오: A
당신이 입력한 문자는 A 입니다.
*/
