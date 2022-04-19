#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(a == b)
    {
        return a;
    }
    
    int x = min(a,b);
    int y = max(a,b);
    
    return GCD(x, y-x);
}

int main()
{
    int a, b;
    cin>>a>>b;

    cout<<"GCD of "<<a<<" and "<<b<<" is "<<GCD(min(a,b),max(a,b));

    return 0;
}