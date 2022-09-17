#include <iostream>

int ly_to_AU(double);

int main()
{
    using namespace std;

    double ly;
    cout << "광년 수: ";
    cin >> ly;

    cout << ly << " 광년은 " << ly_to_AU(ly) << " AU입니다." << endl;

    return 0;
}

int ly_to_AU(double ly)
{
    return ly * 63240;
}

/*
광년 수: 4.2
4.2 광년은 265608 AU입니다.
*/
