#include<iostream>
using namespace std;

int main()
{
    string x;
    cout<<"Enter the string ";
    getline(cin,x);

    char ele;
    cout<<"Enter the element whose frequency is to be found ";
    cin>>ele;

    int count = 0;
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == ele){
            count++;
        }
    }

    cout<<"Frequency of "<<ele<<" is "<<count;

    return 0;
} 