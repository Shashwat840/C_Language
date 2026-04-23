#include<stdio.h>
#include<string.h>
struct student_exam{
    int id;
    int marks[3];
    char name[20];
    float total;
};
int main(){
    float sum = 0;
    struct student_exam s[3];
    for(int i = 0;i<3;i++){
        printf("\nEnter id of student:- ");
        scanf("%d",&s->id);
        printf("\nEnter marks of maths , sci and english:- ");
        scanf("%d %d %d",&s->marks[0],&s->marks[1],&s->marks[2]);
        printf("\nEnter name of student:- ");
        scanf("%c ",&s->name);
    }
    for(int i = 0;i<3;i++){
        sum = (s->marks[i] + sum)/3;
        s->total = sum;
    }
    printf("\nId\tName\tTotal Marks");
    for(int i = 0;i<3;i++){
        printf("\n%d\t%c\t%d",s->id,s->name,s->total);
    }
    return 0;
}