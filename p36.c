#include<stdio.h>
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int a,b;
    printf("enter two nos to swap");
    scanf("%d%d",&a,&b);
    printf("the nos before swaping = %d\t%d",a,b);
    swap(&a,&b);
    printf("the nos after swaping = %d\t%d",a,b);
    return 0;
}