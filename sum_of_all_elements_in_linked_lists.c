#include <stdio.h>
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
int Add(struct Node*p)
{
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
}
/* recursion method
int Add(struct Node*p)
{
    if(p==0)
    return 0;
    else
    return Add(p->next)+p->data;
}
*/
int main() {
   int A[]={3,5,7,10,15};
    add(A,5);
    printf("sum is %d", Add(first));
    return 0;
}
