// program to display inverted half pyramid 
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter the number ofn rows");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
          printf("\n");
    }
}