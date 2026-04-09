#include<stdio.h>
int main(){
    int no1,no2;
    int *p1,*p2;
    printf("\nEnter number 1:- ");
    scanf("%d",&no1);
    printf("\nEnter number 2:- ");
    scanf("%d",&no2);
    p1 = &no1;
    p2 = &no2;
    printf("\nThe value of p1 before increment:- %d",p1);
    printf("\nThe value of p2 before decrement:- %d",p2);
    p1+=1;
    p2-=1;
    printf("\nThe value of p1 after increment:- %d",p1);
    printf("\nThe value of p2 after decrement:- %d",p2);
    return 0;
}