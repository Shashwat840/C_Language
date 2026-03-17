#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a,b,c;
    float s=0,area=0;
    printf("\nEnter the first side of triangle:- ");
    scanf("%f",&a);
    printf("\nEnter second side of triangle:- ");
    scanf("%f",&b);
    printf("\nEnter third side of the triangle:- ");
    scanf("%f",&c);
    s= (a+b+c)/2;
    area= sqrtf(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of triangle is:- %f",area);
    return 0;
}