// Using linear search method for getting first occurence
#include<stdio.h>

int first_occur(int arr[],int size)
{
    for(int i = 0; i < size; i++){
        if(arr[i]==arr[i+1])
        return i;
    }
    return -1;
}


int main(){
    int arr[] = { 5,10,20,20,20,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp  = first_occur(arr,size);
    printf("%d\n",temp);
}