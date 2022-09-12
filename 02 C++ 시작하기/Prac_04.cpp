#include <iostream>

int year_to_month(int);

int main()
{
    using namespace std;

    int year;
    cout << "Enter your age: ";
    cin >> year;

    cout << "당신의 나이는 월수로 " << year_to_month(year) << "입니다." << endl;

    return 0;
}

int year_to_month(int year)
{
    return year * 12;
}
