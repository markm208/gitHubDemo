#include <iostream>

using namespace std;

void power(float base, int exp);

int main()
{
    power(2.5, 3);
    power(2.5, 10);
    power(2.5, 20);

    return 0;
}
//--
void power(float base, int exp)
{
    float result = 1.0;

    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    cout<<fixed<<result<<endl;
}
