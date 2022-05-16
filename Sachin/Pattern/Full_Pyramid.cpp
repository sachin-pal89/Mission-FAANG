#include<iostream>
using namespace std;

void fullPyramid(int height)
{
    for(int i = 0; i <= height; i++)
    {
      for(int j = i; j < height; j++)
      {
         cout<<" ";
      }

      for(int k = 0; k < i; k++)
      {
          cout<<"* ";
      }
      
      cout<<endl;
    }
}

void invFullPyramid(int height)
{
    for(int i = height; i > 0; i--)
    {
        for(int j = i; j < height; j++)
        {
            cout<<" ";
        }

        for(int k = 0; k < i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    fullPyramid(height);
    cout<<endl;
    invFullPyramid(height);

    return 0;
}