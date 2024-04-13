#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q;
    //first the original array p
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    //now new array allocated of bigger size
    q=(int *)malloc(10*sizeof(int));

    //copying values of p to q 
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    // p becomes q and q made null pointer 
    for(int i=0;i<5;i++)
    {
        printf("%d\n",p[i]);
    }

}
