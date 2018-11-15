#include <iostream>
using namespace std;
int main()
{
    int week;
    cout <<"input the week days "<<endl;
    cin>>week;
    if(week==1)
    {
        cout<<"this day is monday"<<endl;
    }
    else if (week==2)
    {
        cout<<"this day is tuesday"<<endl;
    }
    else if (week==3)
    {
        cout<<"this day is wednesday"<<endl;
    }
    else if (week==4)
    {
        cout<<"this day is thursday"<<endl;
    }
    else if (week==5)
    {
        cout<<"this day is friday"<<endl;
    }
    else if (week==6)
    {
        cout<<"this day is saturday"<<endl;
    }
    else
    {
        cout<<"this day is sunday"<<endl;
    }
    return 0;
}
