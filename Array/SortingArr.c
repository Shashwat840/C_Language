/*
#include <stdio.h>
int main(){
    int arr[5];
    int temp;
    for(int i =0;i<5;i++){
        printf("\nENter elements:- ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    printf("\nSorted array:- ");
    for(int i =0;i<5;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}
*/
#include <stdio.h>
int main(){
    int arr[5];
    int temp;
    for(int i =0;i<5;i++){
        printf("\nENter elements:- ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nSorted array:- ");
    for(int i =0;i<5;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}