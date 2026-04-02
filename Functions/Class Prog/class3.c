#include<stdio.h>
void printLine();
int main(){
    int choice;
    printLine();
    return 0;
}
void printLine(){
    int a;
    printf("\nEnter the value of a:- ");
    scanf("%d",&a);
    printf("\nThe value of a:- %d",a);
    printf("\nHello my name is Shashwat");
}