#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of element in the array ";
    cin>>n;

    int a[n];
    cout<<"Enter the element ";
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int *x = a;

    cout<<"Accession Through Pointer "<<endl;
    for(int i = 0; i < n; i++)
    {
        // Accession using pointers
        cout<<*(x+i)<<endl;
    }

    return 0;
}