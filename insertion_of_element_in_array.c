//INSERTION OF A NUMBER AT SEPECIFIC POSITION IN ARRAY
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index in which number to be added: ");
    int p;
    scanf("%d",&p);
    printf("Enter the number to be added :");
    int ds;
    scanf("%d",&ds);
    //shifting arrays elements
    for(int i=n-1;i>=p;i--)
    {
        arr[i+1]=arr[i];
    }
    //adding new element
    arr[p]=ds;

    //rewrititng the elements 
    printf("The new array is: ");
    n=n+1;
    for(int i=0;i<n;i++)
    { 
        printf("%d\t",arr[i]);
    }

}
