#include<iostream>
using namespace std;

int Bin(int number)
{
   if(number <= 1)
   {
       return number;
   }

   int x = number % 2;

   return (Bin(number/2)*10) + x;
}

int main()
{
    int n;
    cin>>n;

    cout<<"Equivalent Binary is "<<Bin(n)<<endl;
}