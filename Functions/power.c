#include<stdio.h>
int powerFun(int x,int y);
int main(){
    int no,x,ans;
    printf("\nEnter value of number:- ");
    scanf("%d",&no);
    printf("\nEnter value of power:- ");
    scanf("%d",&x);
    ans = powerFun(no,x);
    printf("\nThe ans = %d",ans);
    return 0;
}
int powerFun(int x,int y){
    if(y!=0){
        return x*powerFun(x,y-1); 
    }
    else{
        return 1;
    }
}