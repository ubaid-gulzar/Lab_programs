// pprogram to display out put using string
#include<stdio.h>
int main(){
    int i=0;
    char string[10]={"abcdefgh"};
    printf("string is : ");
    for(i=0;i<8;i++){
    printf("%c",string[i]);
    }
    printf("\n reverse of a string is : ");
    i=7;
    while(i>=0){
        printf("%c",string[i]);
        i--;
    }
    return 0;
}