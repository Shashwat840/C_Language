#include <stdio.h>
int main(){
    int a,b,c,x;
    printf("\nEnter number 1:- ");
    scanf("%d",&a);
    printf("\nEnter number 2:- ");
    scanf("%d",&b);
    printf("\nEnter number 3:- ");
    scanf("%d",&c);
    x = (a>b)?((a>c)?a:c) : ((b>c)?b:c);
    printf("\nMax number is:- %d",x);
    return 0;
}