#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int first = 0;
    int second = 1;

    if(n == 1)
    {
        cout<<first<<endl;
    }
    else{
         cout<<first<<endl;
         cout<<second<<endl;
    }
  

    for(int i = 0; i < n-2; i++)
    {
        int temp = second;
        second = first + second;
        first = temp;
        cout<<second<<endl;
    }
}