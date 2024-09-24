#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
    return a-b;
}
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("sum = %d",add(a,b));
    printf("difference = /n%d",subtract(a,b));
    return 0;
}