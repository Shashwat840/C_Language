#include<stdio.h>
int main(){
    int no[5],sum =0;
    int *ptr,i;
    ptr = no;
    for(i=0;i<5;i++){
        printf("\nEnter value of no[%d]:- ",i);
        scanf("%d",(ptr+i));
    }
    
    printf("\nElements\tValue\tAddress\n");
    for(i=0;i<5;i++){
        printf("\tno[%d]\t%d\t%d",i,*(ptr+i),ptr);
        printf("\n");
        sum = sum + *(ptr+i);
    }
    printf("\nSum of all array elements:- %d",sum);
    return 0;
}