// program to calculate avrage of 5 students using nesting of if else
#include<stdio.h>
int main(){
     int m1,m2,m3,m4,m5,per;
     printf("enter marks of 5 students");
     scanf("%d %d %d %d ",&m1,&m2,&m3,&m4,&m5);
     per=(m1+m2+m3+m4+m5)*100/500;
     if(per>=60)
        printf("first division");
     else{
        if(per>=50)
        printf("secod division");
      else{
       if(per>=40)
       printf("third division");
       else{
        if(per<=40)
        printf("fail");
       }
    }
}
          return 0;
           
       
}