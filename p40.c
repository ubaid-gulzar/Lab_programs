// program to swap two numbers usin functions
#include<stdio.h>
//void swap(int,int);    // declearing a function
int main(){
    int *p;
    int *q;
    printf("enter value of two numbers");
    scanf("%d%d",&p,&q);
    printf("number before swapping are %d and %d",p,q);
    swap(&p,&q);   // calling function
     printf("number after swapping are %d and %d",p,q);
     return 0;
}
void swap(int *a,int *b){     //defining a function
    int c;
    c=*a;
    *a=*b;
    *b=c;
    
}