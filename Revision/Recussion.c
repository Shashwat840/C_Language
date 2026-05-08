void Hi(int x);
#include<stdio.h>
int main(){
    int no;
    printf("\nEnter number:- ");
    scanf("%d",&no);
    Hi(no);
    return 0;
}
void Hi(int x){
    if(x<0 ){
        printf("\nBye...");
        
    }
    else{
        printf("\nHii...");
        Hi(x-1);
    }
}