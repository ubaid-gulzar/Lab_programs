// program to display largest number amoung three numbers
#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the value of x,y and z");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>=z)
    printf("z is the grater number");
    if(y+z>=x)
    printf("y is grater number");
    if(z+x>=y)
    printf("x is a grater number");
    return 0;
} 