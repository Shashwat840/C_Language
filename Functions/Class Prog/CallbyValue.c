#include<stdio.h>
void swap(int x , int y);
void main(){
    int x=10 , y = 5;
    swap(x,y);
}
void swap(int x , int y){
   printf("\nAfter swapping value of x=%d\n Value of y= %d",y,x); 
}