#include <iostream>

using namespace std;
void show_time(int, int);

int main()
{
    int h, m;
    cout << "시간 값을 입력하시오: ";
    cin >> h;
    cout << "분 값을 입력하시오: ";
    cin >> m;

    show_time(h, m);

    return 0;
}

void show_time(int h, int m)
{
    cout << "시각: " << h << ":" << m << endl;
}

/*
시간 값을 입력하시오: 9
분 값을 입력하시오: 28
시각: 9:28
*/
