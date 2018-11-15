// Write a C++ program to check whether a number is divisible by 5 and 11 or not.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input the number which you want to check"<<endl;
    cin>>n;
    if(n%5==0)
    {
        cout<<"given number "<<n<<" is divisible by 5"<<endl;
    }
    else if (n%11==0)
    {
        cout<<"the given number "<<n<<" is divisible by 11"<<endl;
    }
    else
    {
        cout<<"the given number "<<n<< "is neither divisible by 5 and 11"<<endl;
    }
    return 0;
}
