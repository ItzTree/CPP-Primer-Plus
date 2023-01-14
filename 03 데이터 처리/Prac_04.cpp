#include <iostream>

int main()
{
    using namespace std;
    long second;
    cout << "초 수를 입력하시오: ";
    cin >> second;

    const int SEC_TO_DAY = 60 * 60 * 24;
    const int SEC_TO_HOUR = 60 * 60;
    const int SEC_TO_MIN = 60;
    int day = second / SEC_TO_DAY;
    int hour = (second - (day * SEC_TO_DAY)) / SEC_TO_HOUR;
    int min = (second - (day * SEC_TO_DAY) - (hour * SEC_TO_HOUR)) / SEC_TO_MIN;
    int sec = second % SEC_TO_MIN;

    cout << second << "초 = " << day << "일, " << hour << "시간, ";
    cout << min << "분, " << sec << "초" << endl;
    return 0;   
}

/*
초 수를 입력하시오: 31600000
31600000초 = 365일, 17시간, 46분, 40초
*/
