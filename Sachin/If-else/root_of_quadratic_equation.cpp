#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c;

    cout<<"Enter value of a"<<endl;
    cin>>a;
    
    cout<<"Enter value of b"<<endl;
    cin>>b;

    cout<<"Enter value of c"<<endl;
    cin>>c;

    float x = (b*b)-(4*a*c);

    float root1, root2;    
    if(x > 0)
    {
       root1 = ((-1*b)+(sqrt(x)))/(2*a);
       root2 = ((-1*b)-(sqrt(x)))/(2*a);

       cout<<"Root 1 "<<root1<<endl;
       cout<<"Root 2 "<<root2<<endl;
    }
    else if(x == 0)
    {
        root1 = (-1*b)/(2*a);
        root2 = root1;

        cout<<"Root 1 "<<root1<<endl;
        cout<<"Root 2 "<<root1<<endl;
    }
    else
    {
        float realRoot = (-1*b)/(2*a);
        float imgRoot = sqrt(-1*x)/(2*a);

        cout<<"Root 1 "<<realRoot<<" + "<<imgRoot<<"i"<<endl;
        cout<<"Root 2 "<<realRoot<<" - "<<imgRoot<<"i"<<endl;
    }

    return 0;
}