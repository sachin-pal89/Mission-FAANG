#include<iostream>
#include<math.h>
using namespace std;

int Deci(int binary, int power)
{
   if(binary == 0)
   {
       return 0;
   }

   int x = binary % 10;

   return (x*pow(2,power)) + Deci(binary/10, power+1);
}

int main()
{
    int n;
    cin>>n;

    cout<<"Equivalent Decimal is "<<Deci(n,0)<<endl;
}