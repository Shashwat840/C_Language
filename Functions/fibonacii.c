#include<stdio.h>
void Fibonacii(int n);
int main(){
    int no;
    printf("\nEnter the number upto where you want to go :- ");
    scanf("%d",&no);
    printf("\n0\t1");
    Fibonacii(no);
    return 0;
}
void Fibonacii(int n){
    int a=0,b=1,ans,sum = 0;
    for (int i = 0; i <= n; i++)
    {
        ans = a+b;
        a=b;
        b=ans;
        printf("\t%d",ans);
        sum = sum + ans;
        // ans=a;
        // Fibonacii(n-1);
    }
    // printf("\nLast element:- %d",ans);
    printf("\nSum of fibonacii upto last element is:- %d",sum);
}