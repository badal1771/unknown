#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"input the three number "<<endl;
    cin>>n1>>n2>>n3;
    if (n1>n2||n1>n3)
    {
        cout<<"the maximum between three are "<<n1<<endl;
    }
    else if (n2>n1||n2>n3)
    {
        cout<<"the maximum between three is "<<n2<<endl;
    }
    else
    {
        cout<<"the mximum between three is "<<n3<<endl;
    }
    return 0;
}
