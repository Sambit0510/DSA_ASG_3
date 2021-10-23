#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main (){
 printf ("Enter the number:: \n");
 int n; scanf("%d",&n);
 int  arr[n];
 for (int i=0;i<n;i++)
    arr[i]=i+1;
 for (int i=1;i<sqrt(n);i++){
    if (arr[i]){
        for (int j=arr[i]*arr[i];j<=n;j+=arr[i]){
            arr[j-1]=0;
        }
    }
 }
 printf("All the prime numbers are::");
 for (int i=1;i<n;i++){
    if (arr[i]){
        printf("%d ",arr[i]);
    }
 } printf("\n");


 return 0;
 }
