#include<iostream>
using namespace std;

int main()
{
    int row, column;

    cout<<"Enter the Dimension of the matrix "<<endl;
    cout<<"No.of rows ";
    cin>>row;
    cout<<"no.of column ";
    cin>>column;

    int a[row][column], TransA[column][row];

    cout<<"Enter element of the matrix"<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Transpose of the Matrix "<<endl;
    for(int i = 0; i < column; i++)
    {
        for(int j = 0; j < row; j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}