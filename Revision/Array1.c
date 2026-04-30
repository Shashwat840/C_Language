//WAP to print and read 10 numbers from user at run time using an array 
#include<stdio.h>
int main(){
    int a[10];
    int sum=0;
    for(int i=0;i<10;i++){
        printf("\na[%d]:- ",i);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("------Output--------");
    for(int i=0;i<10;i++){
        printf("\na[%d]:- %d",i,a[i]);
    }
    printf("\nSum of 10 array elemtns:- %d",sum);
    return 0;
}