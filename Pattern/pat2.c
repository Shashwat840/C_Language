#include<stdio.h>
int main(){
    int i,j,k,r;
    printf("\nEnter number of rows:- ");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        //space logic
        for(k=r;k>=i;k--){
            printf(" ");
        }
        //Printing logic 
        for(j=1;j<=i;j++){
            
            printf("* ");    
        }
        printf("\n");
    }
    return 0;
}