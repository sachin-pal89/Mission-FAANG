#include<iostream>
using namespace std;


// num = 4
int fact(int num)
{
   if(num == 1 || num == 0)
   {
       return 1;
   }
          // 24
   return num *  fact(num-1);
}

int main()
{
    int n;
    cin>>n; // 4
                                      // 24
    cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;

    return 0;
}