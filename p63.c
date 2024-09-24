// program to display output using string
#include<stdio.h>
int main(){
    char string[20]="COMPUTERSCIENCE";  //declaration as well as defining
    printf("string is : ");    
    printf("%s",string);   //to print a given string
    char reverse[20];
    int len=15; 
    for(int i=0;i<len;i++){
       reverse[i]=string[len-1-i];  //starting reverse from 0 and sting from end and iterating
    }
    printf("\nreverse of string is : %s",reverse);  //to print a reverse 12
    
    
}