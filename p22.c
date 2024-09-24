// program to Demonstrate the use of continue and break keywords (in loops)
#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=5;i++){
        if(i=3)
        break;
        printf("%d",i);
    }
}

#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=5;i++){
        if(i=3)
        continue;
        printf("%d",i);
    }
}


