// program to Find sum of series: 1 2 3 4 5 ....n
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter a positive integer");
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("the sum of series %d is %d",n,sum);

} 