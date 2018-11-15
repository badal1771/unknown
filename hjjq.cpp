//defining library
#include <iostream>
using namespace std;
//defining main function
int main()
{
    float cm ,m;
    float km;
    cout<<"enter the number in cm you want to change "<<endl;
    cin>>cm;
    m=cm/100;
    km=cm/100000;
    cout<<"the given number changes to m is "<<m<<endl;
    cout<<"the given number changes to km is "<<km<<endl;
    return 0;
}
