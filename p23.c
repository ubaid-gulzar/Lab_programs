// program to display the sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n
#include<stdio.h>
int main(){
    int n;
    float i,sum=1;
    for(i=2;i<=n;i=i+2)
        sum=sum+1/i;
    
    printf("sum of series is %f",sum);
    return 0;
}