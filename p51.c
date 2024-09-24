// program to calculate avrage of 5 students using nesting of if else
#include<stdio.h>
int main(){
     int m1,m2,m3,m4,m5,per;
     printf("enter marks of 5 subjects");
     scanf("%d %d %d %d ",&m1,&m2,&m3,&m4,&m5);
     per=(m1+m2+m3+m4+m5)*100/500;
     if(per>=60)
        printf("first division");
     
        if(per>=50 && per<60)
        printf("secod division");
      
       if(per>=40 && per<50)
       printf("third division");
    
        if(per<=40)
        printf("fail");

          return 0;         
       
}