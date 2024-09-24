// program to display factoral of a nunber
#include<stdio.h>
int main(){
    int i,num, factorial;
    printf("enter a number");
    scanf("%d",&num);
    factorial = i = 1;
    while(i<=num){
    factorial = factorial*i;
    printf("factorial of a number %d is %d\n",factorial);
    }
    return 0;

}