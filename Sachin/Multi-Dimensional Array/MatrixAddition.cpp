#include<iostream>
using namespace std;

int main()
{
    int row, column;

    cout<<"Enter dimension of  Matrix "<<endl;
    cout<<"No.of Rows ";
    cin>>row;
    cout<<"No.of Column ";
    cin>>column;

    int a[row][column], b[row][column];

    cout<<"Enter value of 1st matrix "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter value of 2nd matrix "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Addition of two matrix gives "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<a[i][j] + b[i][j]<<" ";  
        }
        cout<<endl;
    }

    return 0;
}