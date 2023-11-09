//SPARSE MATRIX USING LOOPS
#include<stdio.h>
int main() {
    int matrix[4][5] ={
        {0,0,0,4,0},
        {1,0,3,0,0},
        {0,7,0,0,2},
        {5,0,8,0,0}
    };
    int size = 0;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matrix[i][j]!=0)
            size++;
        }
    }
    int k = 0;
    int rep_matrix[3][size];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matrix[i][j]!=0)
            {
                rep_matrix[0][k] = i;
                rep_matrix[1][k] = j;
                rep_matrix[2][k] = matrix[i][j];
                k++;
            }
        }
    }
    printf("The sparse matrix is represented as :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",rep_matrix[i][j]);
        }
        printf("\n");
    }
}