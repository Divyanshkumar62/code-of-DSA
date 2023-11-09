#include<stdio.h>
#include<stdbool.h>
 bool isprime(int num) {
    if(num<=1) {
    return false;
    }
    for(int i=2;i*i<=num;i++)
    {
    if(num%i==0)
    return false;
    }
    return true;
 }
 
 int main()
 {
   int arr[20],n;
   int lowprime = -1;
   int k=0;
   int temp;
   while(arr[k]=!' ')
   {
     scanf("%d",&arr[k]);
     k++;
   }
   n = sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++){
     if(isprime(arr[i])){
       if(lowprime == -1|| arr[i]<lowprime)
       {
         lowprime = arr[i];
       }
     }
   }
   if(lowprime!=-1)
   {
      temp = lowprime;
   }
   for(int j=0;j<1000;j++)
     for(int i=0;i<n;i++){
     {
     if(j % arr[i] ==temp)
       printf("%d",j);
     else
       printf("None");
     }
    }
     
 }