#include <iostream>

int main()
{
    using namespace std;

    int mile;
    cout << "마일을 입력하시오: ";
    cin >> mile;

    double kilometer = mile * 1.60934;
    cout << mile << " 마일은 " << kilometer << " 킬로미터입니다." << endl;

    return 0;
}
