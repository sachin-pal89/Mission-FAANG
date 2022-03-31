#include<iostream>
using namespace std;

void getRectangle(int length, int breadth)
{
    for(int i = 0; i < breadth; i++)
    {
        for(int j = 0; j < length; j++)
        {
             cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int length, breadth;
    cin>>length>>breadth;

    getRectangle(length, breadth);
}