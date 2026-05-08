/*
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n , *p , sum = 0;
    printf("\nEnter the number of values you want to input:- ");
    scanf("%d",&n);
    // p = (int *) malloc(n*sizeof(p));
    p = (int*) calloc (n,sizeof(int));
    
    if(p == NULL){
        printf("\nNo memory is been allocated");
    }
    printf("\nEnter elements:- ");
    for(int i = 1;i<=n;i++){
        printf("\nEnter elements:- ");
        scanf("%d",p+i);
        sum = sum  + *(p+i);
    }
    printf("\nTHe sum of given elements are:- %d",sum);
    free(p);
    return 0;
}
*/
//Dynamic memory allocation using relloc 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1 ,n2, *p , sum = 0;
    printf("\nEnter the number of values you want to input:- ");
    scanf("%d",&n1);
    p = (int*) calloc (n1,sizeof(int));
    
    if(p == NULL){
        printf("\nNo memory is been allocated");
    }
    printf("\nEnter elements:- ");
    for(int i = 1;i<=n1;i++){
        printf("\nEnter elements:- ");
        scanf("%d",p+i);
        sum = sum  + *(p+i);
    }
    printf("\nEnter values for n2:- ");
    scanf("%d",&n2);
    p = (int*) realloc(p,n2*sizeof(int));
    if(p == NULL){
        printf("\nNo memory is been allocated");
    }
    else{
        printf("\nMemory is reallocated");
    }   
    for(int i = n1+1;i<=n2;i++){
        printf("\nEnter elements:- ");
        scanf("%d",p+i);
        sum = sum  + *(p+i);
    }
    printf("\nThe sum of given elements are:- %d",sum);
    free(p);
    return 0;
}