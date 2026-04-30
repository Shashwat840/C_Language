#include<stdio.h>
#include<string.h>
int main(){
    char s1[10],s2[10];
    printf("\nEnter your string:- ");
    gets(s1);
    printf("\nEnter your string2:- ");
    gets(s2);
    if(strcmp(s1,s2) > 0){
        printf("String 1 is greater than String 2");
    }
    else if(strcmp(s1,s2) < 0){
        printf("\nString 2 is greater than String 1");
    }
    else{
        printf("\nBoth strings are equal");
    }
    return 0;
}