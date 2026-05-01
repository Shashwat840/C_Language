#include<stdio.h>
#include<string.h>
struct Student {
    int rno;
    char name[20];
    int marks;
};
int main(){
    struct Student s[3];
    int i;
    for(i=0;i<=3;i++){
        printf("\nEnter your rollNo:- ");
        scanf("%d",&s[i].marks);
        printf("\nEnter name of student:- ");
        gets(s[i].name);
    }

    for(i=0;i<3;i++){
        printf("\nRoll NO:- %d",s[i].rno);
        printf("\nName:- %s",s[i].name);
        printf("\nMarks:- %d",s[i].marks);
    }
    return 0;
}