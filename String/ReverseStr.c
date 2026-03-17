#include <stdio.h>
#include <string.h>
int main(){
    char str[20],rev[20];
    int len=0;
    int i=0,j=0;
    printf("\nEnter your string to be reversed:- ");
    gets(str);
    len = strlen(str);
    for(i=len-1;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    printf("\nThe reversed string is given as:- %s",rev);
    return 0;
}