//program to display2D array and calculate the sum of a matrix
#include<stdio.h>

int main(){
    int x,y;
    printf("size of 2D array");
    scanf("%d%d",&x,&y);
    int a[x][y],i,j,sum=0;
    printf("enter the elements of matrix");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
         
            scanf("%d",&a[i],a[j]);
        }
    }
for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        sum += a[i][j];
       
    }
     
}
printf("sum=%d",sum);
    return 0;
}