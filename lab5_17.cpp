#include <iostream>
using namespace std;
int main()
{
    int a,b,c,det,x1,x2;
    cout<<"given eqn is ax2+bx+c=0"<<endl;
    cout<<"input the a ,b and c"<<endl;
    cout<<"input a"<<endl;
    cin>>a;
    cout<<"input b"<<endl;
    cin>>b;
    cout<<"input c"<<endl;
    cin>>c;
    det=b*b-4*a*c;
    if(det>0)
    {
        x1=-b-sqrt(det)/2*a;
        x2=-b+sqrt(det)/2*a;
        cout<<"root are real and different "<<endl;
        cout<<"x1"<<x1<<endl;
        cout<<"x2"<<x2<<endl;
    }
    else if (det==0)
    {
        x=-b/(2*a);
        cout<<"root are real and same "<<endl;
        cout<<"x"<<x<<endl;
    }
    else
    {
        //to be asked by nishant
    }
}
