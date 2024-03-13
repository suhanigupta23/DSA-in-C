#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int d;
    printf("Enter the number to be searched for : ");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(arr[i]==d)
        {
            printf("The number is at the index: %d\n",i);
            break;
        }
     
    }
    if(i==n)
    {
        printf("Number not found.\n ");
    }
}
