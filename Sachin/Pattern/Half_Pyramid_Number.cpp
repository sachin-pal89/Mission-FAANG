#include<iostream>
using namespace std;

void numberPyramid(int height)
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    numberPyramid(height);

    return 0;
}