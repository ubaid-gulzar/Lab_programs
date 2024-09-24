// program check a simple intrest of 3 sets using while loop
#include<stdio.h>
int main(){
    int n,r,p,si,count;
    count=1;
    while(count<=3){
        printf("enter p,n,r");
        scanf("%d %d %d",&p,&n,&r);
        si=p*r*n/100;
        printf("simple intrest=%d\n",si);
        count++;
    }
       return 0;

}
