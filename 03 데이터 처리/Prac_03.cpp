#include <iostream>

int main()
{
    using namespace std;
    int degree, minute, second;
    cout << "위도를 도, 분, 초 단위로 입력하시오: " << endl;
    cout << "먼저, 도각을 입력하시오: ";
    cin >> degree;
    cout << "다음에, 분각을 입력하시오: ";
    cin >> minute;
    cout << "끝으로, 초각을 입력하시오: ";
    cin >> second;

    const double SEC = 60.0;
    const double MIN = 60.0;
    double res = degree + (minute / MIN) + (second / MIN / SEC);
    cout << degree << "도, " << minute << "분, " << second << "초 = ";
    cout << res << "도" << endl;
    return 0;   
}

/*
위도를 도, 분, 초 단위로 입력하시오: 
먼저, 도각을 입력하시오: 37
다음에, 분각을 입력하시오: 51
끝으로, 초각을 입력하시오: 19
37도, 51분, 19초 = 37.8553도
*/
