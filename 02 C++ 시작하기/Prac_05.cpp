#include <iostream>

double cel_to_fah(int);

int main()
{
    using namespace std;

    int cel;
    cout << "섭씨 온도를 입력하시오: ";
    cin >> cel;

    cout << "섭씨 " << cel << "도는 화씨로 " << cel_to_fah(cel) << "도입니다." << endl;

    return 0;
}

double cel_to_fah(int cel)
{
    return 1.8 * cel + 32.0;
}
