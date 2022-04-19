#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of element in the array "<<endl;
    cin>>n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    cout<<"Maximum Element in the array is "<<a[n-1];

    return 0;
}