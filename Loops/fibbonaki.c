#include <stdio.h>
int main(){
    int a=1,b=1,temp,i;
    int sum =0;
    for(int i=1;i<=6;i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    printf("\nSum :- %d",sum);
    return 0;
}