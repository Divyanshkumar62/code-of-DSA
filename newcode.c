#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter the value of n and c:");
    // scanf("%d%d",&n,&r);
    n =4,r=2;
    int nfact=1;    //n!
    int rfact=1;    //r!
    int nrfact=1;  //n-c!
    for(int i=1;i<=n;i++)
    {
        nfact=nfact*i;
        //printf("%d",nfact);
    }
    for(int j=1;j<=r;j++)
    {
        rfact=rfact*j;
        // printf("%d",nfact);
    }
    for(int k=1;k<=(n-r);k++)
    {
        nrfact=nrfact*k;
        // printf("%d",nfact);
    }
    int ncr= nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}