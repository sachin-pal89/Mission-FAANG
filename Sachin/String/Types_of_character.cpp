#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cout<<"Enter the string "<<endl;
    getline(cin,x);

    int countV = 0, countC = 0, countD = 0, countS = 0;

    transform(x.begin(), x.end(), x.begin(), ::tolower);

    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == ' ')
        {
            countS++;
        }
        else if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u')
        {
            countV++;
        }
        else if(x[i] == '0' || x[i] == '1' || x[i] == '2' || x[i] == '3' || x[i] == '4' || x[i] == '5' || x[i] == '6' || x[i] == '7' || x[i] == '8' || x[i] == '9')
        {
            countD++;
        }
        else{
            countC++;
        }
    }

    cout<<"Length of the string: "<<x.length()<<endl;
    cout<<"No of Vowels "<<countV<<endl;
    cout<<"No of Consonants "<<countC<<endl;
    cout<<"No of Digits "<<countD<<endl;
    cout<<"No of Whitespace "<<countS<<endl;

    return 0;
}