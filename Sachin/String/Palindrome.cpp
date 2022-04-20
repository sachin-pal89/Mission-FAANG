#include<iostream>
using namespace std;

int main()
{
    string x;
    getline(cin,x);

    int i = 0, j = x.length()-1, flag = 0;
    while(i <= j)
    {
        if(x[i] != x[j])
        {
            flag = 1;
            break;
        }

        i++;
        j--;
    }

    if(flag == 0)
    {
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }

    return 0;
}