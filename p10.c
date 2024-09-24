// program to display odd even number using if else
#include<stdio.h>
int main(){
   int i;
   printf("enter any number you want to check");
   scanf("%d",&i);
   if(i%2==0){
      printf ("number is even",i);
   }
     else{
      printf("number is odd",i);
     }
       return 0;
}