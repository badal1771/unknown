#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"input the character to check its vowl or consonant"<<endl;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"inputed character is vowel"<<ch <<endl;
    }
    else
    {
        cout<<"inputed character is consonaunt"<<ch <<endl;
    }
    return 0;
}
