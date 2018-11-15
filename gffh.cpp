#include <iostream>
using namespace std;
int main()
{
    int p,r,t,amount;
    cout<<"enter the principle amount of it "<<endl;
    cin>>p;
        cout<<"enter the rate of it"<<endl;
        cin>>r;
        cout<<"enter the timr for it "<<endl;
        cin>>t;
        amount=(p*r*t)/100;
        cout<<"the amount to be deposited is"<<amount <<endl;
        return 0;
}
