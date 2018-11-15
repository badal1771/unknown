#include <iostream>
using namespace std;
int main()
{
    double year, month,days;
    cout<<"ask for the numbers of days "<<endl;
    cin>>days;
    month=days/30;
    year =days/365;
    cout<<"the number of months are "<<month<<endl;
    cout<<"the number of years "<<year <<endl;
    return 0;
}
