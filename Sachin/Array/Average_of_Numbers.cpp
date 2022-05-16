#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of element whose average is to be calculated :";
    cin>>n;

    float a[n];

    cout<<"Enter the numbers "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    float sum = 0,avg;

    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    avg = sum / n;

    cout<<"Average of given n number is "<<avg;

    return 0;
}