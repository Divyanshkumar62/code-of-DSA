#include<stdio.h>

struct array{
    int a[10];
    int length;
};
int linear_struct(struct array arr,int key)
{
    for(int i = 0; i < arr.length;i++)
    {
        if(key == arr.a[i])
        return i;
    }
     return -1;

}
int main(){
    struct array arr={{1,2,3,4,5},6};
    int key = 3;
    // scanf("%d",&key);
    int temp = linear_struct( arr, key);
    printf("Required output: %d",temp);
}