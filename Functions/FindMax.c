#include <stdio.h>
int maxFun(int a, int b, int c);
int main(){
    int a,b,c;
    int max=0;
    printf("\nEnter number 1:- ");
    scanf("%d",&a);
    printf("\nEnter number 2:- ");
    scanf("%d",&b);
    printf("\nEnter number 3:- ");
    scanf("%d",&c);
    max = maxFun(a,b,c);
    printf("\nMax number is:- %d",max);
    return 0;
}
int maxFun(int a, int b, int c){
    int max;
    if(a>b){
        if(a>c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if(b>c){
            max = b;
        }
        else{
            max = c;            
        }
    }
    return max;
}