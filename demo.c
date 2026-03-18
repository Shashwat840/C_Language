#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    ch = getchar();
    if(isalpha(ch)){
        printf("\nIt is an alphabet...");
    }
    else if(isdigit(ch)){
        printf("\nIt is an digit...");
    }
    else{
        printf("\nIt is an special char...");
    }
    return 0;
}