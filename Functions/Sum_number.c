#include<stdio.h>
void SumFun(int n);
int main(){
    int n;
    printf("\nEnter number you want to do sum of:- ");
    scanf("%d",&n);
    SumFun(n);
    return 0;
}
void SumFun(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("\nSum of first %d numbers is %d",n,sum);
}