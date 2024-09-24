// program to swap two numbers using call by value method
#include<stdio.h>
void swap(int *p, int *q );
int *p;
int *q;
int main(){
    printf("enter two numbers");
    scanf("%d %d",&p,&q);
    printf("number before swapping are %d and %d",p,q);
    swap(&p,&q);
    printf("number after swapping are %d and %d",p,q);
    return 0;
}
void swap(int *p, int *q){
    int temp; 
    temp=*p;
    *p=*q;
    *q=temp;
    
}