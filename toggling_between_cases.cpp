//Program for toggling cases
//UPPER to LOWER 
//Lower to UPPER
#include<stdio.h>
int main()
{
    char A[]="Welcome";
    int i;
    for(i=0;A[i]!=0;i++)
    {
        if(A[i]>=65&&A[i]<=90)
        {
            A[i]=A[i]+32;
        }
        else if(A[i]>='a'&&A[i]<=122)
        {
            A[i]=A[i]-32;
        }
        //the integer value will remain unchanged
    }
    printf("%s",A);
}
