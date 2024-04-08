#include<stdio.h>
//CALL BY ADDRESS
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;;
    a=10;
    b=20;
    swap(&a,&b);
    printf("%d %d",a,b);
}
//CALL BY REFERENCE used in cpp only 
void swap(int &x,int &y)
{
    //rest same as CALL BY VALUE
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    printf("%d %d",a,b);
}
