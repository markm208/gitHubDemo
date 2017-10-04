#include <iostream>

using namespace std;

int power(int base, int exp);

int main()
{
    cout<<power(2, 3)<<endl;
    cout<<power(2, 10)<<endl;
    cout<<power(2, 20)<<endl;

    return 0;
}
//--
int power(int base, int exp)
{
    int result = 1;

    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    return result;
}
