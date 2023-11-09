#include<stdio.h>
int search(int arr[],int key,int n){
    if(n==0)
    return -1;
    if(key==arr[n-1])
    return(n-1);
    else
    return search(arr,key,n-1);
}

int main(){
    int arr[]={5,4,3,10,15,17,20,28};
    int key,n;
    printf("Enter the key element: \n");
    scanf("%d",&key);
    n = sizeof(arr)/sizeof(arr[0]);

    int temp = search(arr,key,n);
    printf("The required index is:%d",temp);
}