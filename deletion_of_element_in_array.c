//DELETION OF ELEMENT AT SPECIFIED POSITION 
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
    printf("Enter the index in which number to be deleted: ");
    int p;
    scanf("%d",&p);
    //shifting the elements to overlap the given index
    for(int i=p;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("The new array is :");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}
