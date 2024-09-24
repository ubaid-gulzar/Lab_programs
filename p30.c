// program to input an integer array from the user and display the same.
#include<stdio.h>
int main(){
  int arr[5],i,n;
  printf("enter the elements of an integer array");
  scanf("%d",&n);
  for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }
    for(i=0;i<5;i++){
      printf("%d",&arr[i]);
    }
       printf("\n");
     return 0;
}
