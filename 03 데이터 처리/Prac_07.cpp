#include <iostream>

int main()
{
    using namespace std;
    double cons_UK;
    cout << "휘발유 소비량(L/100km)을 입력하시오: ";
    cin >> cons_UK;

    const double KM_TO_MILE = 62.14;
    const double GAL_TO_LETER = 3.875;
    double cons_USA = 1 / (cons_UK / GAL_TO_LETER / KM_TO_MILE);
    cout << "휘발유 소비량(mile/gallon): " << cons_USA << endl;
    return 0;   
}

/*
휘발유 소비량(L/100km)을 입력하시오: 8.7
휘발유 소비량(mile/gallon): 27.6773
*/
