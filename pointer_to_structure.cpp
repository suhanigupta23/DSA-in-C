#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{

    //no need in cpp to write struct in front of the function
    Rectangle r={10,5};
    //normally we write using the variable
    //FOR NORMAL VARIABLE
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    //ACCESS USING POINTERS : we use arrow
    Rectangle *p=&r;
    cout<<p->length<<endl;    //any one of the format can be used
    cout<<(*p).breadth<<endl; //any one of the format can be used

}
