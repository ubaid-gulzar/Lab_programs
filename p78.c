#include<stdio.h>
int main(){
    int a=0,b=1,c=1,n,i;
    printf("enter the desirable number of terms");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        c=a+b;
        a=c;
        b=c;
        printf("%d\t",c);
    }
      return 0;
}
