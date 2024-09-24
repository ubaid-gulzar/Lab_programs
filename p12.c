// program to check whether a number is odd or even sing ternory operator
#include<stdio.h>
int main(){
    int i;
    printf("enter a number to be checked");
    scanf("%d",&i);
    (i%2==0)?printf("number is even"):printf("number is odd");
    return 0;
}