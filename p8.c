// program to display area of a circle using a constant function pi
#include<stdio.h>
#define PI 3.14;
int main(){
   float area, radius;
   printf("enter the radius of a circle");
   scanf("%f",&radius);
   area = ( radius * radius ) * PI;
   printf("area of circle with radius %f is %f\n",radius,area);
   return 0;
}