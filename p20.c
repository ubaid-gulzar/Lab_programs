// program to Display table of all integers from 2 to 10
#include<stdio.h>
int main(){
    int i,j;
    for(i=2;i<=10;i++){
        printf("\nmultiplication table of %d\n",i);
        for(j=1;j<=10;j++){
        printf("%d*%d = %d\n",i,j,i*j);
        }
    }

      printf("\n");
}