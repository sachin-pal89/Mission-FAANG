#include<iostream>
using namespace std;

int main()
{
    string x;
    getline(cin, x);

    int count = 0;

    for(int i = 0; x[i] != '\0' ; i++)
    {
        count++;
    }

    cout<<"Length of String is "<<count<<endl;

    return 0;
}