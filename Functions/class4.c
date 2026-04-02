#include <stdio.h>
int addFun();
int main(){
    int ans;
    ans = addFun();
    printf("\nSubtraction of both number:- %d",ans);
    return 0;
}
int addFun(){
    int a,b,add,sub;
    printf("\nEnter first number:- ");
    scanf("%d",&a);
    printf("\nEnter second number:- ");
    scanf("%d",&b);
    add = a+b;
    printf("\n%d + %d = %d",a,b,add);
    sub = a-b;
    return sub;
}