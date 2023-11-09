#include<stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int linear(int arr[],int key,int n){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
        swap(arr[i],arr[i+1]);
        return i+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={5,4,3,10,15,17,20,28};
    int key,n;
    printf("Enter the key element: \n");
    scanf("%d",&key);
    n = sizeof(arr)/sizeof(arr[0]);

    int temp = linear(arr,key,n);
    printf("The required index is:%d",temp);
}