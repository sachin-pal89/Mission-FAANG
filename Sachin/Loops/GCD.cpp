#include<iostream>
using namespace std;

int gcd(int num1,int num2)
{
    int gcd = 0;

    if(num1 == 0)
    {
        return num2;
    }
    else if(num2 == 0)
    {
        return num1;
    }
    else if(num1 == num2)
    {
        return num1;
    }

    for(int i = 1; i <= min(num1,num2); i++)
    {
        if( num1%i == 0 && num2%i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int main()
{
    int n,m;
    cin>>n>>m;

    int z = gcd(n,m);
    cout<<z<<endl;
}