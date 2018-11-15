#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"input the something to know about it"<<endl;
    cin>>ch;
    if((ch=='a'&&ch=='z')||(ch=='A'&&ch=='Z'))
    {
        cout<<"inputed digit "<<ch<<"is character "<<endl;
    }
    else if (ch>=0||ch<=9)
    {
        cout<<"inputed digit "<<ch <<"is number "<<endl;
    }
    else
    {
        cout<<"the inputed number "<<ch<<"is special digit "<<endl;
    }
    return 0;
}
