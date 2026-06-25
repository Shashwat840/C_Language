#include<stdio.h>
void main(){
    int no,i,count=0;
    printf("\nEnter number:- ");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        if(no%i==0){
            count++;
        }
    }
    if(count == 2){
        printf("\nIt is a prime number.");
    }
    else{
        printf("\nIt is not a prime number");
    }
}