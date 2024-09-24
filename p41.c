// program to get out put using if else
#include<stdio.h>
int main(){
    int quantity,discount,rate,total;
    printf("enter quantity and rate ");
    scanf("%d %d",&quantity,&rate);
    if(quantity>1000)
        discount=10;
    else
       discount=0;
      total=(quantity*rate)-(quantity*rate*discount/100);
      printf("total expense=%d",total);
        
    }
