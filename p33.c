//program to display the transpose of matrics
#include<stdio.h>
int main(){
    int a[2][3],i,j,sum=0;
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            scanf("%d",&a[i],a[j]);
        }
    }
      for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
        printf("%d",a[i],a[j]);
        
        printf("%d",a[j],a[i]);
    }
 }
        return 0;
}