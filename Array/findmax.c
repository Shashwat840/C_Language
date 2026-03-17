#include <stdio.h>
int main(){
    int a[5];
    int max,temp;
    for(int i=0;i<5;i++){
        printf("Enter elements of array:- ");
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(int i=1;i<5;i++){
        /*
            1 < 2
            temp = 1
            max = 2
            a[i] = 1 
        */
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("\nMax element is:- %d",max);
    return 0;
}