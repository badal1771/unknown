#include <iostream>
using namespace std;
int main()
{
    int a,c,b,d;
    cout<<"input the three angle of triangle "<<endl;
    cin>>a>>b>>c;
    d=a+b+c;
    if(d=180)
    {
        cout<<"given angle are a valid triangle"<<d<<endl;
    }
    else
    {
        cout<<"it is not a valid triangle"<<d<<endl;
    }
    return 0;
}
