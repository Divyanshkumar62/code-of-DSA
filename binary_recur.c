#include<stdio.h>
int binary_recur(int arr[],int key ,int size,int first,int last)
{   
    if(first<=last){
    int mid = (first + last)/2;
    if(key == arr[mid])
    return mid;
    else if(key > arr[mid])
    return binary_recur(arr,key,size,mid +1,last);
    else
    return binary_recur(arr,key,size,first ,mid-1);
    }
}

int main(){
    int arr[] = {10,20,30,40,50,70,85,95};
    int key = 40;
    int size = sizeof(arr)/sizeof(arr[0]);
    int first = 0,last = size-1;
    // int mid;

    int temp = binary_recur(arr,key,size,first,last);
    printf("%d",temp);
}