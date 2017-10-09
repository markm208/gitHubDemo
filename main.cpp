#include <iostream>

using namespace std;

float power(float base, int exp);
//test, test, test- even more tests
int main()
{
    cout<<fixed;
    cout<<power(2.5, 3)<<endl;
    cout<<power(2.5, 10)<<endl;
    cout<<power(2.5, 20)<<endl;

    return 0;
}
//--
float power(float base, int exp)
{
    float result = 1.0;

    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    return result;
}
