// program tto make a simple calculator
#include<stdio.h>
int main(){
    int x,y;
    printf("enter 1 for addition,2 for subtraction,3 for multpictiom and 4 for divide");
    scanf("%d %d",&x,&y);
    switch(x){
        case 1:
        printf("addition");
        
        case 2:
        printf("subtraction");
        
        case 3:
        printf("multiplication");
        
        case 4:
        printf("division");

        default :
        printf("correct option");
    
    }
}