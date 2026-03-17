#include <stdio.h>
int main(){
    int a[10];
    int sum=0 , max=0 , min=0 , avg=0;
    for(int i=0;i<10;i++){
        printf("\nEnter elements of array:- ");
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
     
    avg =  sum/10;
    min = a[0];
    max = a[0];
    for (int i = 0; i < 10; i++)
    {
        if(min>a[i]){
            min = a[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if(max<a[i]){
            max = a[i];
        }
    }
    printf("\nMax :- %d",max);
    printf("\nMin is:- %d",min);
    printf("\nSum is:- %d",sum);
    printf("\nAvg is:- %d",avg);
}