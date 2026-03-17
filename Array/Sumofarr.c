#include <stdio.h>
int main(){
    int a[10];
    int sum =0;
    for(int i=0;i<10;i++){
        printf("\nEnter element:- ");
        scanf("%d",&a[i]);
        sum=sum +a[i];
    }
    printf("\nSum of all elements of array is:- %d",sum);
    return 0;
}