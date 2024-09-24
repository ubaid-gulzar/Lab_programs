#include<stdio.h>
void search(int arr[],int size,int ele){

for(int i=0;i<size;i++){
    if(arr[i]==ele){
       printf("element found");
       break;
    }
    else
    printf("element not found");
}
}
int main()
{
    int arr[5],ele,size;
    printf("enter size of array");
    scanf("%d",&size);
    printf("enter elements of array");
    for(int i=0;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to search");
    scanf("%d",ele);
    search(arr,size,ele);
    return 0;
}