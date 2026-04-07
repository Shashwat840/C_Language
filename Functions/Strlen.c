//WAP to find str and return length of the string 
#include <stdio.h>
#include<string.h>
int stLen(char str[]);
int main(){
    char str[100];
    int i=0;
    printf("\nEnter the string:- ");
    gets(str);
    while (str[i] != '\0'){
        i++;
    }
    printf("\nLength of the string is:- %d",i);
    return 0;
}
int stLen(char str[]){
    int i=0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}