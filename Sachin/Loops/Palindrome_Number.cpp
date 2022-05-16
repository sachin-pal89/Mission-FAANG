#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int oNum = n;
    int rNum = 0;
    int rem = 0;

    while(oNum > 0)
    {
        rem = oNum % 10;
        rNum = (rNum*10) + rem;
        oNum = oNum / 10;
    }

    if(rNum == n)
    {
        cout<<"Number is palindrome"<<endl;
    }
    else{
        cout<<"Number is not a palindrome"<<endl;
    }
}