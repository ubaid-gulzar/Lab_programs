// program to add two numbers using functions
#include<stdio.h>
int add(int,int);  // decleration of a function
int main(){
    int x;
    int y;
    printf("enter two numbers");
    scanf("%d",&x,&y);
    printf("%d",add(x,y)); // by using add()we call a function
    return 0;
}
int add(int a,int b){   // define a function
return a+b;
}