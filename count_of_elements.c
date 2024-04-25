#include <stdio.h>
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
int count (struct Node*p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return 1;
}
int main() {
    int A[]={3,5,7,10,15};
    create(A,5);
    printf("Length is %d", count(first));
  
    return 0;
}
