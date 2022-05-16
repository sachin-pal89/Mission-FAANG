#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num = 0;
    int rem = 0;
    while(n > 0)
    {
        rem = n % 10;
        num = (num*10) + rem;
        n = n / 10;
    }

    cout<<"Reverse Number is "<<num<<endl;
}