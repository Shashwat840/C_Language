#include<stdio.h>
void swap(int *x , int *y);
void main(){
    int x=10 , y = 5;
    swap(&x,&y);
}
void swap(int *x , int *y){
   int a,b;
   printf("\nEnter value of a:- ");
   scanf("%d",&a);
   printf("\nEnter value of b:- ");
   scanf("%d",&b);
   x = &a;
   y = &b;
   printf("\nValue of x and y are %d and %d..",*x,*y);
}