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
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int low,high;
    cin>>low>>high;

    for(int i = low ; i <= high; i++)
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}