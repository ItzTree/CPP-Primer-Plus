#include <iostream>

void print_three();
void print_see();

int main()
{
    using namespace std;

    print_three();
    print_three();
    print_see();
    print_see();

    return 0;
}

void print_three()
{
    using namespace std;
    cout << "Three blind mice" << endl;
}

void print_see()
{
    std::cout << "See how they run" << std::endl;
}

/*
Three blind mice
Three blind mice
See how they run
See how they run
*/
