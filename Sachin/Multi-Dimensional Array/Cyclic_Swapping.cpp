#include<iostream>
using namespace std;

void swap(int* a, int* b, int* c)
{
    int temp = *c;
    *c = *b;
    *b = *a;
    *a  = temp;
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    swap(&a,&b,&c);

    cout<<a<<" "<<b<<" "<<c;

    return 0;
}