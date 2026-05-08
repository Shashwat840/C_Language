/*
#include <stdio.h>
void Hi(int x);
int main(){
    int x;
    printf("\nEnter value of x:- ");
    scanf("%d",&x);
    Hi(x);
    return 0;
}
void Hi(int x){
    if(x<=0){
        printf("\nBye...");//Base class called
    }
    else{
        printf("\nHi");
            Hi(x-1);//Recursion called
        
    } 
}
*/
/*
#include<stdio.h>
int fact(int n);
int main(){
    int n,ans=0;
    printf("\nEnter number:- ");
    scanf("%d",&n);
    ans = fact(n);
    printf("\nThe factorial of %d :- %d",n,ans);
    return 0;
}
int fact(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
*/
#include<stdio.h>
int fibonacii(int i);
int main(){
    int i,n;
    printf("\nEnter number:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\t",fibonacii(i));
    }
    return 0;
}
int fibonacii(int i){
    if (i == 0 ){
        return 0;
    }
    else if (i == 1 ){
        return 1;
    }
    else{

        return fibonacii(i-1) + fibonacii(i-2);
    }
}