// program to display square root of a number
#include<stdio.h>
#include<math.h>
int main(){
    int squareroot,number;
    printf("enter a number to be checked");
    scanf("%d",&number);
    squareroot=sqrt(number);
    printf("squareroot of a number %d is %d",number,squareroot);
    return 0;
}