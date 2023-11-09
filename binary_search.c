#include<stdio.h>
int binary_search(int arr[],int key,int size){
     int f = 0,l = size-1;
    // int mid = (f+l)/2;
        while(f<=l) 
    {
         int mid = (f+l)/2;
        if(key == arr[mid])
        return mid;
        else if(key<arr[mid])
        return l = mid-1;
        else if(key>arr[mid])
        return f = mid+1;
        
    } 

}
int main() {
    int arr[] = {10,20,30,40,50,60,70,75,95};
    int key = 50;
    int size = sizeof(arr)/sizeof(arr[0]); 

   int temp = binary_search(arr, key, size);
   printf("%d ",temp);
   
}