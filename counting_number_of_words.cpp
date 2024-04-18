//Program for counting words
//the number of spaces + 1 gives the no. of words in it...
/*also if their is multiple gaps left it is called white space
 then there comes case when due to excess white space ,no. of words come as: space+1 which gives 
 wrong result.*/
#include<stdio.h>
int main()
{
    char A[]="How are you";
    int i, word=0;
    for(i=0;A[i]='\0';i++)
    {
        if(A[i]==' ' && A[i-1]!=' ')
        /*the current     the previous space
          space should     should not be
          be white          white space.
          space*/       
          word++;
    }
    printf("%d",word);
}
