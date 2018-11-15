#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"input the charater"<<endl;
    cin>>ch;
    if(ch>='a'||ch<='z')
    {
        cout<<"inputed character is lower case"<<ch<<endl;
    }
    else if (ch>='A'||ch<='Z')
    {
        cout<<"inputed character is upper case"<<ch<<endl;
    }
    else
    {
        cout<<"input error"<<ch<<endl;
    }
    return 0;
}
