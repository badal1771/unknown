#include <iostream>
using namespace std;
int main()
{
    int sp ,cp,amount,amount2,amount3;
    cout<<"input the cost price "<<endl;
    cin>>cp;
    cout<<"input the selling price "<<endl;
    cin>>sp;
    if(sp>cp)
    {
        amount=sp-cp;
        cout<<"the profit in it is "<<amount<<endl;
    }
    else if (cp>sp)
    {
        amount2=cp-sp;
        cout<<"the loss in it "<<amount2<<endl;
    }
    else
    {
        amount3=sp-cp;
        cout<<"no profit or loss"<<amount3<<endl;
    }
    return 0;
}
