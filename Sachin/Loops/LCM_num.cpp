#include<iostream>
using namespace std;

int lcm(int num1, int num2)
{
    if(num1 == 0 || num2 == 0 )
    {
        return 0;
    }
    else if(num1 == 1)
    {
        return num2;
    }
    else if(num2 == 1)
    {
        return num1;
    }

    int count = max(num1,num2);
    
    while(true)
    {
        if( count % num1 == 0 && count % num2 == 0)
        {
           break;
        }
        count++;
    }
    
    return count;
}

int main()
{
    int n,m;
    cin>>n>>m;

    int ans = lcm(n,m);
    cout<<ans<<endl;
}