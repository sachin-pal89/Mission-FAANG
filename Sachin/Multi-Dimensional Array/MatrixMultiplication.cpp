#include<iostream>
using namespace std;

int main()
{
    int row1, row2, column1, column2;

    cout<<"Enter the dimension of 1st matrix "<<endl;
    cout<<"no. of rows ";
    cin>>row1;
    cout<<"no. of column ";
    cin>>column1;

    cout<<"Enter the dimension of 2nd matrix "<<endl;
    cout<<"no. of rows ";
    cin>>row2;
    cout<<"no. of column ";
    cin>>column2;

    if(column1 != row2)
    {
        cout<<"Multiplication Cannot happen"<<endl;
    }
    else{
        
        int a[row1][column1], b[row2][column2], c[row1][column2] = {0};
        
        cout<<"Enter element of 1st Matrix"<<endl;
        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < column1; j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Enter element of 2nd Matrix"<<endl;
        for(int i = 0; i < row2; i++)
        {
            for(int j = 0; j < column2; j++)
            {
                cin>>b[i][j];
            }
        }        

        //Multiplication of matrices

        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < column2; j++)
            {
                for(int z = 0; z < row2; z++)
                {
                    c[i][j] += a[i][z] * b[z][j]; 
                }
            }
        }

        cout<<"Matrix after multiplication "<<endl;
        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < column2; j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}