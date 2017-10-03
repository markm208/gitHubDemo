#include <iostream>

using namespace std;

void power(int base, int exp);

int main()
{
    power(2, 3);
    power(2, 10);
    power(2, 20);

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

    cout<<result<<endl;
}
