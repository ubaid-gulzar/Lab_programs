// program t0 input a string from user and print it in reverse oeder
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];  // declare a string
    int length,i;
    printf("enter a string");  // input a string
    scanf("%s",str);
    // length=strlen(str);
     printf("string in reverse oeder");
     for(i=length-1;i>=0;i--){           // condition for reverse oeder
        printf("%c",str[i]);
     }
       return 0;
}
