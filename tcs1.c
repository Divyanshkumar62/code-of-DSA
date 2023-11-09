#include<stdio.h>
int main()
{
    int a[20],i;
printf("\nEnter array elements and press enter to finish input:");
do
{
    scanf("%d",&a[i]);
    i++;
    printf("\t");
}
while('\n');
printf("%d",a[0]);

}