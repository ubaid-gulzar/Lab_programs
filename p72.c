// program to display factorial of a number using functions
#include<stdio.h>
int main(){
    int num,i;
    int factorial=1;
    printf("enter a number to be checked");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        factorial=factorial*i;
       
    }
     printf("factorial of a number %d is %d",num,factorial);
    
    return 0;
}