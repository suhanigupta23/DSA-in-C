#include<stdio.h>
#include<stdlib.h>
struct Node
    {
        int data;
        struct Node *next;
    }*first=NULL;       //defining a global pointer

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int Max(struct Node *p)
{
    int max=INT32_MIN;
    while(p)
    {
        if (p->data>max)
        max=p->data;
        p=p->next;

    }
    return max;
}

/*
By recursion: 
int RMax(struct Node*p)
{
    int x=0;

    if(p==0)
      return INT32_MIN;
    x=RMax(p->next);
     if(x>p->next)
      return x;
     else return p->data;
}
Then call the recursic]ve function in the main function
*/
int main()
{
    int A[]={3,5,7,10,56,20};
    create(A,6);
    printf("Max is %d\n",Max(first));
    return 0;
}
