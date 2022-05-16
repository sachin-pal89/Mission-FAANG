#include<iostream>
using namespace std;

int main()
{
    string x;
    getline(cin,x);

    for(int i = 0; i < x.length(); i++)
    {
        if((i == 0 || x[i-1] == ' ') && x[i] != ' ') 
        {
            int value = x[i] - 32;
            x[i] = char(value);
        }
    }

    cout<<"Updated String is : "<<x<<endl;
}