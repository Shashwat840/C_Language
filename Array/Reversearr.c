#include <stdio.h>
int main(){
    int a[10],i;
    for(i=0;i<10;i++){
        printf("\nEnter elements of array:- ");
        scanf("%d",&a[i]);
    }
    printf("\nReverse elements of array is:- ");
    printf("--------------------");
    for ( i = 9; i >= 0; i--)
    {   
        printf("\n%d",a[i]);
    }
}