#include<stdio.h>
int main(){
    float bs,hr,da,gs;
    printf("enter the salery");
    scanf("%f",&bs);
    if(bs<1500){
        hr=bs*10/100;
        da=bs*90/100;
    }
      else{
        hr=500;
        da=bs*98/100;
      }
        gs=bs+hr+da;
        printf("gross saleert=%f\n",gs);
        return 0;
}