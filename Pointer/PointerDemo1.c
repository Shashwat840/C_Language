//Initlisation declaration of pointer 
#include<stdio.h>
int main(){
    int x,*p;
    printf("\nEnter value of x:- ");
    scanf("%d",&x);
    p = &x;
    printf("\nPointer value:- %d",*p);
    return 0;
}