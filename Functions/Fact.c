//WAP to find factorial of given number using recusion 
#include<stdio.h>
void Fact(int no);
int main(){
    int no;
    printf("\nEnter number:- ");
    scanf("%d",&no);
    Fact(no);
    return 0;
}
void Fact(int no){
    int fact = 1;
    for (int i=1;i<=no;i++)
    {   
        fact = fact *i;
    }
    printf("\nFactorial :- %d",fact);
}