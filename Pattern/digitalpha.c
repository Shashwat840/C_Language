#include <stdio.h>
int main(){
    int i,j,k;
    int dig ,alpha,n=5;
    for(i=1;i<=n;i++){
        dig = 1,alpha=65;
        for(j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(i%2==0){
                printf("%c ",alpha);
                alpha++;
            }
            else{
                printf("%d ",dig);
                dig ++;
            }
        }
        printf("\n");
    }
    return 0;
}