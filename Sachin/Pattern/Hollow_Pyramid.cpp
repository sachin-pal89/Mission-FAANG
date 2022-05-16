#include<iostream>
using namespace std;

void hollowHeight(int height)
{
    for(int i = 0; i < height; i++)
    {
        for(int j = i; j < height; j++)
        {
            cout<<" ";
        }

        for(int k = 0; k <= i; k++)
        {
             if(k == 0 || k == i || i == height-1)
             {
                 cout<<"* ";
             }
             else{
                 cout<<"  ";
             }
        }

        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    hollowHeight(height);
}