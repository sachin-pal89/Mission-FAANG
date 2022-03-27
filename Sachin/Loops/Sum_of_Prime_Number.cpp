#include<iostream>
#include<math.h>
using namespace std;


bool prime(int x)
{
    if(x % 2 == 0)
    {
        return false;
    }

    for(int i = 2; i <= sqrt(x); i++)
    {
        if( x % i == 0)
        {
            return false;
        }
    }

    return true;
}


int main()
{
    int number;
    cin>>number;

    int mid = number/2;

    for(int i = 2; i <= mid; i++)
    {
        if(prime(i))
        {
            if(prime(number-i))
            {
               cout<<number<<"="<<i<<"+"<<(number-i)<<endl;
            }
        }
    }
    return 0;
}