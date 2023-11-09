#include<stdio.h>

int reverse(int arr[],int size,int f,int l){
      if(f<=l){
        
      }
}

int main() {
    int arr[] = { 12,17,36,55,78,90};
    int f,l,mid;
    int size = sizeof(arr)/sizeof(arr[0]);
    f = arr[0];
    l = arr[size-1];
    mid = (f+l)/2;
    int temp = reverse(arr,size,f,l);
}