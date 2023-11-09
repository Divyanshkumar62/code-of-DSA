#include<stdio.h>
int main() {
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==j||(i+j==n))
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }

}