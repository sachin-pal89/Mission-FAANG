#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int first = 0;
    int second = 1;
   
   if(n == 0)
   {
       cout<<first<<endl;
   }
   else{
       cout<<first<<endl;
       cout<<second<<endl;
   }

   int temp = 0;

   while(temp <= n)
   {
       temp = first + second;

       if(temp > n)
       {
           break;
       }

       cout<<temp<<endl;

       first = second;
       second = temp;
   }

   return 0;
}