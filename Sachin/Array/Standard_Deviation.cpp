#include<iostream>
#include<math.h>
using namespace std;

float Mean(float a[], int n)
{
    float mean = 0;

    for(int i = 0; i < n; i++)
    {
        mean += a[i];
    }

    return (mean/n);
}

float Diff(float mean, float a[], int n)
{
    float result = 0;

    for(int i = 0; i < n; i++)
    {
        result += pow((max(mean,a[i])-min(mean,a[i])),2);
    }

    return result;
}

int main()
{
    int n;
    cout<<"Enter number of element in the array ";
    cin>>n;

    float a[n];
    cout<<"Enter the number "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    float mean = Mean(a, n);

    float squaredDiff =  Diff(mean,a,n);

    float variance = squaredDiff/n;

    cout<<variance;

    float standardDeviation = sqrt(variance);
    
    cout<<"Standard Deviation is "<<standardDeviation;

    return 0;
}