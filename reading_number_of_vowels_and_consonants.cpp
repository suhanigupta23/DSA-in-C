#include<stdio.h>
int main()
{
    char A[]="How are you";
    int i;
    int vcount=0,ccount=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'
       || A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
        {
            vcount++;
        }
        else if(A[i]>=65&&A[i]<=90||
        A[i]>=97&&A[i]<=122)
        {
            ccount++;
        }
    }
    printf("The number of vowels are: %d\n",vcount);
    printf("The number of consonants are: %d\n",ccount);
}
