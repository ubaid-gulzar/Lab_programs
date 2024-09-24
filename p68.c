// program to display whether a string is palindrome or not
#include<stdio.h>
int main(){
    char str[20];     // declare a string
    int length=0;
    int i=0;
    printf("enter a string");  // input string
    scanf("%s",str);
    while(str[i]!='\0'){      // condition
        length++;
        i++;
    }
     int flage=1;
     for(i=0;i<length/2;i++){    // condition
    if(str[i]!=str[length-i-1]){
        flage=0;
         break;
     }
} 
      if(flage){
        printf("string is palindrome");
      }
        else{
            printf("string is not palindrome");
        }
    
     return 0;
 }

