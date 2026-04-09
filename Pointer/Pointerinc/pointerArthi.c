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
    *p2 += 2;
    *p1 -= 2;
    printf("\nValue of pointer p1:- %d",*p1);
    printf("\nValue of pointer p2:- %d",*p2);
    return 0;
}