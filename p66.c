// program to fing the length of a string
#include<stdio.h>
int main(){
    char str[100];  // declare a string
    int length=0;
    printf("enter a string");  // input a string
    scanf("%s",str);
    while (str[length]!='\0'){     // condition
        length++;
    }
     if(str[length]>0 && str[length-1]){   // condition
        length--;
     }
     printf("length of a string is %d",length);  // print length of string
     return 0;
}