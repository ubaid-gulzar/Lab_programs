// program to display one number raised power to the another
#include<stdio.h>
int main(){
    int x,y,power,i;
    printf("enter the values of x and y\n");
    scanf("%d %d",&x,&y);
     power=i=1;
     while(i<=y){
        power=power*x;
        i++;
     }
       printf("%d to the power %d is %d",x,y,power);
       return 0;

}