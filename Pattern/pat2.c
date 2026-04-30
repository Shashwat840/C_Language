#include<stdio.h>
int main(){
    int i,j,k,r;
    printf("\nEnter number of rows:- ");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(k=r;k>=i;k--){
            printf(" ");
        }
        
        for(j=1;j<=i;j++){
            printf("%d ",i);
            
        }
        printf("\n");
    }
    return 0;
}