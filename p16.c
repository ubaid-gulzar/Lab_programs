// program to display all even numbers from 1 to 100 using loops and if
#include<stdio.h>
int main(){
    int i;
    printf("enter the number to be checked");
    for(i=1;i<=100;i++){
      printf("%d\n",i);
    }
      if(i%2==0){
        printf("number is even\n");
      }
}