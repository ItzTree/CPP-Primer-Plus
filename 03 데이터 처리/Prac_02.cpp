#include <iostream>

int main()
{
    using namespace std;
    int ft, in, lb;
    cout << "키 입력(피트): ";
    cin >> ft;
    cout << "키 입력(인치): ";
    cin >> in;
    cout << "체중 입력(파운드): ";
    cin >> lb;

    double m, kg;
    m = (12 * ft + in) * 0.0254;
    kg = lb / 2.2;

    double bmi = kg / (m * m);
    cout << "BMI는 " << bmi << "입니다." << endl;
    return 0;   
}

/*
키 입력(피트): 5
키 입력(인치): 6
체중 입력(파운드): 165
BMI는 26.6874입니다.
*/
