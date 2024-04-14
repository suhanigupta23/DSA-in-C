#include<stdio.h>
#include<stdlib.h>
int main()
{
    //1. METHOD 1:  created inside stack
    int A[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}};

    //2. METHOD 2:  created heap
    int *B[3];
    int **C;
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    B[0]=(int *)malloc(5*sizeof(int));
    B[1]=(int *)malloc(5*sizeof(int));
    B[2]=(int *)malloc(5*sizeof(int));

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

    //METHOD  3: creating heap
    C=(int **)malloc(3*sizeof(int *));
        //array in heap
    C[0]=(int*)malloc(4*sizeof(int));
    C[1]=(int*)malloc(4*sizeof(int));
    C[2]=(int*)malloc(4*sizeof(int));

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
}
