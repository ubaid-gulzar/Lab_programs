// program to display the digits of any natural number in reverse order
#include<stdio.h>
int main(){
    int n,i;
    printf("enter a positive integer\n");
    scanf("%d",&n);
    if(n<=0){
        printf("positive number");
    for(i=n;i>=1;i--){
        printf("%d",i);
    }
}
    printf("\n");
}