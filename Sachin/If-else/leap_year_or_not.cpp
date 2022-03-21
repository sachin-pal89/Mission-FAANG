#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year to be checked"<<endl;
    cin>>year;

    if(year % 4 == 0)
    {
        if(year % 100 == 0 && year % 400 != 0)
        {
            cout<<"year is not a leap year"<<endl;
        }
        else{
            cout<<"Year is leap year"<<endl;
        }
        
    }
    else{
        cout<<"year is not a leap year"<<endl;
    }

    return 0;
}