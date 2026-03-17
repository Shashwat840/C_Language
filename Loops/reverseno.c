#include <stdio.h>
int main(){
    int num,r=0;
    int sum =0;
    printf("\nEnter number:- ");
    scanf("%d",&num);
    int i=0;
    while(num!=0){
        r = num%10;
        sum = (sum*10) + r;
        num = num/10;
        i++;
    }
    printf("\nRev No:- %d",sum);
    return 0;
}