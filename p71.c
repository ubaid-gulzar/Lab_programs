// program to display square of a number
#include<stdio.h>
int square(int);
int main(){
    int x,y;
    printf("enter any number");
    scanf("%d",&x);
    x=square(y);
    printf("square of a number is %d and %d",x,y);
    return 0;
}
int square(int x){
    float y;
    y = x*x ;
    return(y);
}