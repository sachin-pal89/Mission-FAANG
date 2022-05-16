#include<iostream>
using namespace std;

int main()
{
   string x;
   getline(cin,x);

   for(int i = 0; i < x.length(); i++)
   {
       if((x[i]-'a' >= 0 && x[i]-'a' <= 25) || (x[i]-'A' >= 0 && x[i]-'A' <= 25))
       {
           int value = x[i] + 1;
           x[i] = char(value);
       }
   }

   cout<<x<<endl;
   return 0;
}