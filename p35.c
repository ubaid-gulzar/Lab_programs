// program to display sum of all elements of integer array
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("entere the elements");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
     for(i=0;i<=n;i++){
        sum+=arr[i];
     }   
       printf("sum is %d",sum);
}





