// program to sum two numbers using functions
#include<stdio.h>
int calsum(int x,int y,int z);   // declaring a function
int main(){
int x,y,z,sum=0;
printf("enter any three numbers\n");
scanf("%d %d %d",&x,&y,&z);
sum=calsum(x,y,z);             // calling a function
printf("sum is %d",sum);
return 0;
}
int calsum(int x,int y,int z){   // defining a function
int k;
k=x+y+z;
return(k);
}