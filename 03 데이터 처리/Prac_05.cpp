#include <iostream>

int main()
{
    using namespace std;
    long long all, usa;
    cout << "세계 인구수를 입력하시오: ";
    cin >> all;
    cout << "미국의 인구수를 입력하시오: ";
    cin >> usa;

    double per = double(usa) / all * 100;
    cout << "세계 인구수에서 미국이 차지하는 비중은 " << per << "%이다." << endl;
    return 0;   
}

/*
세계 인구수를 입력하시오: 6898758899
미국의 인구수를 입력하시오: 310783781
세계 인구수에서 미국이 차지하는 비중은 4.50492%이다.
*/
