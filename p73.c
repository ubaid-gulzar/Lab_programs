// simple program to display output using pointers
#include<stdio.h>
int main(){

    int x;
    
    int *p;        // declare a pointer

    x=10;

    p=&x;        // store adress of x in p

    printf("value %d is store at location %d in memory\n",x,p);

    printf("%d",*p);   // display value at locayion p
}