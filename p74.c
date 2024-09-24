// program to swap two number using functions (call by refrance method)
#include<stdio.h>
int main(){
    int x,y;
    printf("enter two integers");
    scanf("%d%d",&x,&y);
    printf("number before swapping are %d and %d",x,y);
    swap(&x,&y);
    printf("number after swapping are %d and %d",x,y);
    return 0;
}
int swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}