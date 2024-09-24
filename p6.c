// program to display all even numbers from 100 to 1
#include<stdio.h>
int main(){
    int i;
    for(i=100;i>=1;i--){
        if(i%2==0){
            printf("%d\t",i);
        }
    }
        return 0;
}