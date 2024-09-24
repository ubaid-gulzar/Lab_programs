// program to display sum of all element of an array
#include<stdio.h>
int main(){
  int size,i;
    int arr[size];    // declare size
    printf("enter the size of array");
    scanf("%d",&size);                  // input elements
      
    printf("enter array");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
   int sum=0;
      for(i=0;i<size;i++){   // add all elements to the variable sum
        sum =sum + arr[i];                 
      }
      printf("sum of array =%d",sum);     // print sum
      
      return 0;
        
}