#include <stdio.h>
int main(){
    int sp ,ep,n;
    printf("\nEnter the number whose multiple you want to find:-  ");
    scanf("%d",&n);
    printf("\nEnter the starting point:- ");
    scanf("%d",&sp);
    printf("\nEnter the ending point:- ");
    scanf("%d",&ep);
    for(int i=sp;i<=ep;i++){
        if(i%n==0){
            printf("%d\t",i);
        }
    }
    return 0;
}