// program to display 1 for salam 2 for adab 3 for hello
#include<stdio.h>
int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    switch(number){
        case 1:
        printf("asalam alikum");
        break;

        case 2:
        printf("hello");
        break;
    
        case 3:
        printf("Aadaab");
        break;
    
        default:
        printf("incorrect option");
        break;
    }
     return 0;
}