// program to display whether a number is prime or not
#include<stdio.h>
int main(){
    int i,a=0,b=1,c=1,n;
    printf("enter the desired number of terms\n");
    scanf("%d",&n);
    printf("%d %d",a,b,c);
    for(i=0;i<=(n-2);i++){
        c=a+b;
        a=b;
        c=a;
    }
    return 0;
}