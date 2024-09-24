// program to check whatehr a year is leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("enter the year to be checked");
    scanf("%d",&year);
    if(year%400==0){
        if(year%100==0)
            printf("leap year");
            else
            printf("not a leap year");
     }
       if(year%4==0)
        printf("leap year");
        else
        printf("not a leap year");
       return 0;
}