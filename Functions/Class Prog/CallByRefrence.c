#include<stdio.h>
void swap(int *x , int *y);
void main(){
    int x=10 , y = 5;
    printf("\nValue of x:- %d",x);
    printf("\nValue of y:- %d",y);
    swap(&x,&y);
}
void swap(int *x , int *y){
   int a,b;
   printf("\nEnter value of x you want to swap:- ");
   scanf("%d",&a);
   printf("\nEnter value of y you want to swap:- ");
   scanf("%d",&b);
   x = &a;
   y = &b;
   printf("\nValue of x:- %d",*x);
    printf("\nValue of y:- %d",*y);
}