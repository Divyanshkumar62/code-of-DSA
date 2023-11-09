#include<stdio.h>

int first_occur1(int arr[],int first,int last,int key){
    int mid;
     mid =(first+last)/2;
      if(first>=last){
        return -1;
      }
       
        if(arr[mid]<key)
            return first_occur1(arr,mid+1,last,key);
        else if(arr[mid]>key)
           return first_occur1(arr,first,mid-1,key);
        else if(mid==0 || arr[mid]!=arr[mid-1])
           return mid;
        else
          return first_occur1(arr,first,mid-1,key);
    
      
}

int main(){
   int arr[] = {5,10,20,20,20,60,60,80,95};
   int size,temp,first=0,last;
   int key = 60;
   size = sizeof(arr)/sizeof(arr[0]);
   last = size;
   temp = first_occur1(arr,first,last,key);
   printf("%d\n",temp);
}