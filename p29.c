// program to calculate marks of 5 students ,sum,avrage
#include<stdio.h>
int main(){
    int marks[5],i;
    int avrage,sum=0;
    printf("enter the marks of 5 students");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    } 
      avrage=sum/5;
      printf("sum=%d",sum);
      printf("avrage=%d",avrage); 
   
      return 0;

}
