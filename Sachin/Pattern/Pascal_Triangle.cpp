#include<iostream>
using namespace std;

int facto(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }

    return n * facto(n-1);
}

int combo(int n, int r)
{
    return (facto(n)/(facto(r)*facto(n-r)));
}

void getPascalTriangle(int height)
{
    for(int i = 0; i < height; i++)
    {
        for(int  j = i; j <height; j++)
        {
            cout<<" ";
        }

        for(int k = 0; k <= i; k++)
        {
            cout<<combo(i,k)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    getPascalTriangle(height);

    return 0;
}