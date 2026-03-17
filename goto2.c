#include <stdio.h>
#include <math.h>
int main(){
    int x=1;
    int a,b;
    begin:
    printf("\nEnter number :- ");
    scanf("%d",&a);
    b = sqrt(a);
    printf("\nSquare root of %d is %d",a,b);
    x++;
    if(x<=5){
        goto begin;
    }
    return 0;
}