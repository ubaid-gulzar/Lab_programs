// program to compare three numbers using nesting of if else
#include<stdio.h>
int main(){
   int num1,num2,num3;
   printf("enter three numbers");
   scanf("%d %d %d",&num1,&num2,&num3);
   if(num1>num2){
      printf("%d is the largest number",num1);
   }
      else
          printf("%d is the largest number",num2);
   
      if(num2>num3){
      printf("%d is the largest number",num2);
      }
      else
          printf("%d is the largest number",num3);

      if(num1=num2=num3){
      printf("%d is equal to %d",num1,num2,num3);
    
      return 0;
   }
}
