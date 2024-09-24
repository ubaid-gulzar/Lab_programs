// write a program in c display content of an integer array using pointer
#include<stdio.h>
int main(){
    int a[100],n,i;
    int *p;
    printf("enter the size of an integer array");
    scanf("%d",&n);
    printf("enter the elements of an integer array");
    for(i=0;i<n;i++){
        scanf("%d",& a[i]);
    }
    p=&a;
    printf("values of array are\n");
    for(i=0;i<n;i++){
        printf("%d\n",*p);
        p++;
    }
      return 0;

}