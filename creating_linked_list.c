#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

void Linked_list(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    //declaration 
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    //memory allocation
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    //linking of first and second node
    head->data=3;
    //pointing and linking 
    head->next=second;

    //linking of second and third node
    second->data=5;
    //pointing and linking 
    second->next=third;


    //linking of third and fourth node
    third->data=19;
    //pointing and linking 
    third->next=fourth;

    //TERMINATION 
    fourth->data=45;
    //pointing and linking 
    fourth->next=NULL;

    Linked_list(head);

}
