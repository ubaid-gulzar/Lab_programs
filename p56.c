// program to delete an array from an elememnt
#include<stdio.h>
int main(){
  int arr[5],i=0,element,index;
 
  printf("enter array");
  for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }
 printf("enter the element you want to delete");
    scanf("%d",&element);
    for(i=0;i<5;i++){
        if(arr[i]==element){
            index=i;
            break;
        }
    }
          for(i=index;i<5;i++){
          arr[i]=arr[i+1];
          }
          for(i=0;i<4;i++)
          printf("%d\t",arr[i]);
        return 0;
}

