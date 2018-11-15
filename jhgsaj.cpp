#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"input the number which you wan to check"<<endl;
    cin>>n1;
    if(n1>0)
    {
        cout<<"the given number is "<<n1<<"postive"<<endl;
    }
    else if (n1<0)
    {
        cout<<"the given number "<<n1<<"negative"<<endl;
    }
    else
    {
        cout<<"the given number "<<n1<<" is zero"<<endl;
    }
    return 0;
}
