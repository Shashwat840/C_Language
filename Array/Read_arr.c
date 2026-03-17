#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("\nEnter a[%d]:- ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nElements of array are:- ");
    for (int i = 0; i < 10; i++)
    {
        printf("\na[%d]=%d",i,arr[i]);
    }
    return 0;
}