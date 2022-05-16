#include<bits/stdc++.h>
using namespace std;

class Solution
{
  
  public: 

  int minHeight(int a[], int n, int k)
  {
     sort(a,a+n);

     int maxi = a[n-1];
     int mini = a[0];
     int res = maxi-mini;

     for(int i = 1; i < n; i++)
     {
         maxi = max(a[i-1]+k, a[n-1]-k);
         mini = min(a[i]-k,a[0]+k);

         if(mini < 0)
         {
             continue;
         }

         res = min(res, maxi-mini);
     }

     return res;
  }

};


int main()
{
    int k, n;
    cin>>k>>n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    Solution obj;
    auto ans = obj.minHeight(a,n,k);
    cout<<ans<<endl;

    return 0;
}