#include<iostream>
using namespace std;

int Power(int base, int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }

    return base * Power(base,exponent-1);
}

int main()
{
    int base, exponent;
    
    cout<<"Enter Base ";
    cin>>base;

    cout<<"Enter Exponent ";
    cin>>exponent;

    cout<<"Power of the given value is "<<Power(base,exponent);

    return 0;
}