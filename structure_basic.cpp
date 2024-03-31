#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    //declaration and initialization
    struct rectangle r1={10,20};
    // 4 bytes by each int , 1 byte by char (will be used) but allocated memory will be of 4 bytes
    printf("The size take n by this structure is;%lu\n",sizeof(r1));
    //changing the initialized length , breadth values
    // dot operator is used to access the member
    r1.length=45;
    r1.breadth=32;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
}

//PADDING: padding is the taking/allocating of extra memory to a data type
//though not used by that data type 
//as it becomes for processor to read the structure easilyy having data types of various bytes size..
