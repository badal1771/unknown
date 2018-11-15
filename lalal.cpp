#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"input the something to whether it is alphabet or not"<<endl;
    cin>>ch;
    if ( (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        cout<<"inputed number "<<ch<<" is character "<<endl;
    }
    else
    {
        cout<<"inputed something "<<ch <<" is not character "<<endl;
    }
    return 0;
}
