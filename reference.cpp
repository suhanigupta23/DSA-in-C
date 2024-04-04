#include<iostream>
using namespace std;
int main()
{
    //reference given to 'a' by using 'r' ..nickname r given to a
    int a=10;
    int &r=a;

    //assigning value of 'b' to a new variable ..2 memory address mei store hoga they become separate
    int b=20;
    int re=b;

    cout<<a<<endl<<r<<endl;
}
