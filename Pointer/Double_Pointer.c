#include<stdio.h>
int main(){
    int a;
    int *ptr1,**ptr2;
    printf("\nEnter value of number:- ");
    scanf("%d",&a);
    ptr1 = &a;
    ptr2 = &ptr1;
    printf("\nValue of a:- %d",a);
    printf("\nValue of *ptr1:- %d",*ptr1);
    printf("\nValue of ptr1:- %d",ptr1);
    printf("\nAddress of ptr1:- %d",&ptr1);
    printf("\nValue of ptr2:- %d",ptr2);
    printf("\nValue of *ptr2:- %d",*ptr2);
    printf("\nValue of **ptr2:- %d",**ptr2);
    return 0;
}//end of prog 