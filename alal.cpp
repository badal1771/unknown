#include <iostream>
using namespace std;
int main()
{
    int maths ,eng,phy,bio,chem;
    int total,average,percentage;
    cout<<"enter the maths marks"<<endl;
    cin>>maths;
    cout<<"enter the eng marks"<<endl;
    cin>>eng;
    cout<<"enter the phy marks"<<endl;
    cin>>phy;
    cout<<"enter the bio marks"<<endl;
    cin>>bio;
    cout<<"enter the chem marks "<<endl;
    cin>>chem;
    total=maths+eng+phy+bio+chem;
    average=total/5;
    percentage=average;
    cout<<"the total marks scored by student is "<<total<<endl;
    cout<<"average marks scored by student is "<<average<<endl;
    cout<<"percentage scored by student is "<<percentage<<endl;
    return 0;
}
