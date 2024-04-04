//DYNAMIC ALLOCATION OF STRUCTURE
#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    Rectangle *p;
    //object created in heap
    p=(struct Rectangle*)malloc(sizeof(struct Rectangle));

    p->length=15;
    p->breadth=7;

    cout<<p->length<<endl;
    cout<<p->length<<endl;
}
