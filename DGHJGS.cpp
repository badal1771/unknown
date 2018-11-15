#include <iostream>
using namespace std;
int main()
{
    int amount;
    int note1 , note2,note5,note10,note20,note50,note100,note200,note500,note2000;
    note1=note2=note5=note10=note20=note50=note100=note500=note2000=0;
    cout<<"enter the amount"<<endl;
    cin>>amount;
    if (amount>=2000)
    {
        note2000=amount/2000;
        amount-=note2000*2000;
    }
    if (amount>=500)
    {
        note500=amount/500;
        amount-=note500*500;
    }
    if(amount>=200)
    {
        note200=amount/200;
        amount-=note200*200;
    }
    if (amount>=100)
    {
        note100=amount/100;
        amount-=note100*100;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount-=note50*50;
    }
    if (amount>=20)
    {
        note20=amount/20;
        amount-=note20*20;
    }
    if (amount>=10)
    {
        note10=amount/10;
        amount-=note10*10;
    }
    if(amount>=5)
    {
        note5=amount/5;
        amount-=note5*5;
    }
    if(amount>=2)
    {
        note2=amount/2;
        amount-=note2*2;
    }
    if(amount>=1)
    {
        note1=amount/1;
        amount-=note1*1;
    }
    cout<<"no. of 2000 notes"<<note2000<<endl;
    cout<<"no of 500 notes"<<note500<<endl;
    cout<<"no. of 200 notes"<<note200<<endl;
    cout<<"no. of 100 notes"<<note100<<endl;
    cout<<"no. of 50 notes"<<note50<<endl;
    cout<<"no. of 20 notes"<<note20<<endl;
    cout<<"no of 10 notes"<<note10<<endl;
    cout<<"no of 5 notes"<<note5<<endl;
    cout<<"no. of 2 notes"<<note2<<endl;
    cout<<"no. of 1 notes"<<note1<<endl;
    return 0;
}
