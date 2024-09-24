// program to display an integer array in reverse order
#include<stdio.h>
int main(){
  int size,i,n;
    int arr[100];    // declare size
    printf("enter the size of array");
     scanf("%d",&n);                  
    
       printf("enter array elements");       // input array elements
       for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
      
       for(i=n-1; i>=0; i--){

        printf("%d",arr[i]);
    }
       
        printf("\n");
        return 0;
}

    