#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    int sum=0;
    int total;
    for(int i=0;i<n;i++)
    {
       total=sum+arr[i]; 
    }
    printf("The total sum of the array elements is:%d",total);
}
