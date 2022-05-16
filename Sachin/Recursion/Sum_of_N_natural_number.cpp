#include<iostream>
using namespace std;

int SumNatural(int n)
{
    if(n < 1){
        return 0;
    }

    return n + SumNatural(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<"Sum of "<<n<<" natural numbers are "<<SumNatural(n);
    return 0;
}