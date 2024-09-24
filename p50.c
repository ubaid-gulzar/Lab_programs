// program to cgeck factorial of a number
#include<stdio.h>
int main(){
    int num,i,fact;
    printf("enter the number to be checked");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
      printf("factorial = %d\n",fact,num);
      return 0;
}