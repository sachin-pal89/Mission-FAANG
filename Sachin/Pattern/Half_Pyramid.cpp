#include<iostream>
using namespace std;

void Pyramid(int height)
{
    for(int i = 1; i <= height; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void InvPyramid(int height)
{
    for(int i = height; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    Pyramid(height);
    cout<<endl;
    InvPyramid(height);

    return 0;
}