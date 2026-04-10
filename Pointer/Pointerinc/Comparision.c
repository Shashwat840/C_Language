#include<stdio.h>
int main(){
    int a = 5, b = 5;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    if(*p1==*p2){
        printf("\nBoth the pointers are equal");
    }
    else{
        printf("\nBoth the pointer are not equal");
    }
    return 0;
}