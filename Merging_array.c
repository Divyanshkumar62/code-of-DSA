#include<stdio.h>
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,0};
    int size = sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0]);
    int i,j,k,arr12[size];
    for(i=0,k=0,j=0;k<size;)
    {
      if(arr1[i]<arr2[j])
      arr12[k++] = arr1[i++];
      else
      arr12[k++] = arr2[j++];
    }
    for(int s=0;s<size-1;s++)
    {
     printf("%d",arr12[s]);
    }

    printf("\nAfter sorting :\n");
      for(int i = 0; i < size; i++) //Sorting the array
  {
    int tem;
    for (int j = i + 1; j < size; j++) {
      if (arr12[i] > arr12[j]) {
        tem = arr12[i];
        arr12[i] = arr12[j];
        arr12[j] = tem;
      }
    }
  }

  for(int s=0;s<size;s++)
    {
     printf("%d",arr12[s]);
    }
}