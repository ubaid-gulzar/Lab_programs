// program to display roots of a quadratic equations
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float realpart,imagenerypart,discrimineant,root1,root2;
    printf("enter the cofficents of a,b,c");
    scanf("%f %f %f,&a,&b,&c");

    // calculate discrimenent

    discrimineant= b * b - 4 * a * c;

    //calculate roots

  if (discrimineant >0){

    // two real roots

    root1=(-b+sqrt(discrimineant)/2*a);
    root2=(-b-sqrt(discrimineant)/2*a);
    printf("roots are real and distinct\n");
    printf("root1 =%2f\n", root1);
    printf("root2 =%2f\n", root2);
  }
   else if(discrimineant==0){

    // one real root(but both roots are same)

     root1=root2=-b/(2*a);
     printf("root1=root2=%2lf",root1);
   }

     // complex roots(discriminent < 0);

     realpart= -b/(2*a);
     imagenerypart= sqrt(-discrimineant)/(2*a);
     printf("roots are complex and different\n");
     printf("root1=%2f + %2f\n", realpart, imagenerypart);
     printf("root2=%2f - %2f\n", realpart, imagenerypart);
     }
    


