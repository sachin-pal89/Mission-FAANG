#include<iostream>
using namespace std;

void getHollowRectangle(int length, int breadth)
{
    for(int i = 0; i < breadth; i++)
    {
        for(int j = 0; j < length; j++)
        {
            if(i == 0 || j == 0 || j == length-1 || i == breadth-1)
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
    int length,breadth;
    cin>>length>>breadth;

    getHollowRectangle(length,breadth);
}