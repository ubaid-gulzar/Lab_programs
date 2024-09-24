// program to search an array element(linear search)
#include<stdio.h>
int main(){
    int arr[100];
    int size,i,target;
    printf("enter the size of array");
    scanf("%d",&arr);
    printf("enter the elements of array");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
     printf("element we want to search");
     scanf("%d",&target);
     for(i=0;i<size;i++){
        if (arr[i]== target){
            printf("element found at index is %d",i);
        }
     }

}