// using for loops display the simple intrest of 3 sets
#include<stdio.h>
int main(){
    int p,y,r,i,si;
    for(i=1;i<=3;i++){
    printf("enter p,y,r");
    scanf("%d %d %d",&p,&y,&r);
    si=p*y*r/100;
    printf("simple interst =%d\n",si);
    }
    return 0;
}