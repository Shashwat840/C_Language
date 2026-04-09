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
        printf("\nBye...");
    }
    else{
        printf("\nHi");
            Hi(x-1);
        
    } 
}