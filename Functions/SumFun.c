#include<stdio.h>
int digCal(int no);
int main(){
    int no,ans;
    printf("\nEnter number:- ");
    scanf("%d",&no);
    ans = digCal(no);
    printf("\nThe sum of number of digits is:- %d",ans);
    return 0;
}
int digCal(int no){
    int r,sum = 0;
    while (no>0){
        r = no%10;
        sum = r + sum;
        no = no/10;
    }
    return sum;
}