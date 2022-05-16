#include<iostream>
using namespace std;

int main()
{
    string x;
    getline(cin,x);

    string result = "";
    string current = "";

    for(int i = 0; i <= x.length(); i++)
    {
         if(x[i] == ' ' || i == x.length())
         {
            if(current.length() > result.length())
            {
                result = current;
            }
            current = "";
            continue;
         }

         current = current + x[i];
    }

    cout<<"The Biggest Word in String is : "<<result<<endl;

    return 0;
}