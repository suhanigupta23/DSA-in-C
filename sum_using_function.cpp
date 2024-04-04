#include<iostream>
using namespace std;
//function declarartion
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int num1=10;
    int num2=23;
    int sum;
    sum=add(num1,num2);
    cout<<"sum: "<<sum<<endl;
}
