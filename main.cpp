#include <iostream>

using namespace std;

int main()
{
    return 0;
}
//--
void power(int base, int exp)
{
    int result = 1;

    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    cout<<base<<endl;
}
