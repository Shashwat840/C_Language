#include <stdio.h>
int main(){
    int no,r;
    int sum=0,num;
    printf("\nEnter three digit number:- ");
    scanf("%d",&no);
    num = no;
    while (no>0)
    {
        r = no%10;
        sum =sum +(r*r*r);
        no = no/10;
    }
    printf("\nThe armstrong = %d",sum);
    if(num == sum){
        printf("\nIt is an armstrong number...");
    }else{
        printf("\nIt is not an armstrong number:- ");
    }
    return 0;
}