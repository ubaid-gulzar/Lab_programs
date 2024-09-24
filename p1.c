// program to display largest number amoung two numbers
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x and y");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("x is the largest number");
    if(y>x)
    printf("y is the largest number");
      return 0;
}