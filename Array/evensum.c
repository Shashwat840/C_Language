#include <stdio.h>
int main(){
    int a[10];
    int sum =0,max;
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter number:- ");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if(a[i]%2 == 0){
            sum = sum + a[i];
        }
    }
    max = a[0];
    for (int i = 1; i < 10; i++)
    {
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("\nMax = %d",max);
    printf("\nSum of even elements in array:- %d",sum);
    return 0;
}