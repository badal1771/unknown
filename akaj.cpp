#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input the year which you wan tot check "<<endl;
    cin>>n;
    if(n%4==0)
    {
        cout<<"inputed year "<<n<<" is leap year "<<endl;
    }
    else
    {
        cout<<"inputed year "<<n<< " is not a leap year "<<endl;
    }
    return 0;
}
