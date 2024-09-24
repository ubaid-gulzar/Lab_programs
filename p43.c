#include<stdio.h>
int main(){
    float sp,cp,loss,profit;
    printf("enter the cost price and selling price");
    scanf("%f %f",&sp,&cp);
    profit=cp-sp;
    loss=sp-cp;

    if(profit>0){

    printf("seller has made a profir of %f",profit);

   if(loss>0){

    printf("seller has made a loss of %f",loss);
        
        if(profit==0){

            printf("seller has made no loss\n");
        }
    }
 }  
          return 0;
}