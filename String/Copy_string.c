#include <stdio.h>
#include <string.h>
int main(){
    char str1[20],str2[20];
    int i=0,j=0;
    printf("\nENter string 1:- ");
    gets(str1);
    printf("\nEnter string 2:- ");
    gets(str2);
    while(str1[i] != '\0'){
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
    printf("\nThe copied string is:- %s",str1);
    return 0;
}   