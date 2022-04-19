#include<iostream>
using namespace std;

int main()
{
    string x;
    getline(cin, x);

    string z = "";
    for(int i = 0; i < x.length(); i++)
    {
        if((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z'))
        {
            z = z + x[i];
        }
    }

    cout<<z<<endl;

    return 0;
}
