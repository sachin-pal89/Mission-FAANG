#include<iostream>
using namespace std;

int main()
{
    string x;
    getline(cin,x);

    int wordCount = 0;

    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == ' ' && x[i-1] != ' ')
        {
            wordCount++;
        }
    }

    cout<<"Number of words in the string is : "<<wordCount+1<<endl;

    return 0;
}