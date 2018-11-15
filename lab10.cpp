//basic programming of c++ in class (pseudo code)
//this video is for basic of class lets start
#include <iostream>
using namespace std;
class box{
    public:
double height;
double length;
double breath;
double gevolume(void){return length*breath*height;}
double areaofit(void){return length*breath;}};
int main()
{
    //defining box 1 and box 2
    box box1;
    box box2;
    //giving the dimension of box 1
    box1.height(10);
    box1.length(15);
    box1.breath(25);
    //giving dimension of box 2
    box2.height(13);
    box2.length(65);
    box2.breath(20);
    volume=box1.gevolume();
    cout<<"volume of box 1 is :"<<vloume<<endl;
    area=box2.areaofit();
    cout<<"area of box 2 is "<<area<<endl;
    return 0;
}
