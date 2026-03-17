#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i;
    printf("\nEnter string:- ");
    gets(str);
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("\nThe toggled string is:- %s",str);
    return 0;
}