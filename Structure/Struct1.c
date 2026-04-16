//Copying and comparing structure 
#include<stdio.h>
#include<string.h>
struct Class{
    int number;
    char name[20];
    float marks;
};
int main(){
    struct Class c1 = {1,"Shashwat",100};
    struct Class c2 = {2,"Shrey",99};
    struct Class c3;
    c3 = c2;
    if((c3.marks == c2.marks)&&(c3.number==c2.number)&&(strcmp(c3.name,c2.name)==0)){
        printf("\nThe structure varible is same");
    }
    else{
        printf("\nStructure varible are not same");
    }
    return 0;
}