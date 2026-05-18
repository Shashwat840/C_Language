//Check prime or not 
/*
#include<stdio.h>
int main(){
    int no,count;
    printf("\nEnter a number:- ");
    scanf("%d",&no);
    
    
    for(int i=1;i<=no;i++){
        if(no%i==0){
            count++;
        }
    }
    if(count == 2){
        printf("\nIt is a prime number");
    }
    else if (no == 1 || no == 0)
    {
        printf("\n1 is neither prime nor composite");
    }
    else{
        printf("\nIt is not a prime number");
    }
    return 0;
}
*/
//2--> Pallindrome
/*
#include<stdio.h>
int main(){
    int no,rev = 0,r,n;
    int sum = 0;
    printf("\nEnter a number:- ");
    scanf("%d",&no);
    n = no;
    while(n != 0){
        r = n%10;
        rev = rev*10 + r;
        n = n/10;
    }
    if(rev == no){
        printf("\nIt is a pallindrome number..");
    }
    else{
        printf("\nIt is not a pallindrome number..");
    }
    return 0;
}
*/
//Write a program to count alphabets, digits, symbols and space from a given string.
/*
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int alpha = 0 , dig = 0,symbol = 0, space = 0;
    printf("\nEnter a string:- ");
    gets(str);
    for(int i = 0;str[i] != '\0';i++){
        if( (str[i] >= 'a' && str[i]<= 'z') || (str[i] >= 'A' && str[i] <= 'Z' ) ){
            alpha++;
        }
        else if(str[i] >= '0' && str[i]<= '9'){
            dig++;
        }
        else if(str[i] == ' '){
            space++;
        }
        else{
            symbol++;
        }
    }
    printf("\nTotal number of Alphabets:- %d",alpha);
    printf("\nTotal number of Digits:- %d",dig);
    printf("\nTotal number of Space:- %d",space);
    printf("\nTotal number of Symbols:- %d",symbol);

    return 0;
}
*/
//Design a student record system using structures that store and display 
//information such as name, roll number, and grades
/*
struct Student{
    char name[20];
    int rNo;
    int grades;
};
#include<stdio.h>
int main(){
    struct Student s1 = {"Shrey",1,99};
    printf("\nName of Roll No:- %d",s1.rNo);
    printf("\nName of Grade:- %d",s1.grades);
    printf("\nName of student:- %s",s1.name);

    return 0;
}
*/
/*
Write a program to Matrix Multiplication (2x2)
*/
/*
#include<stdio.h>
int main(){
    int a[2][2],b[2][2],c[2][2];
    printf("\nEnter 4 elements of first matrix:- ");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter 4 elements of second matrix:- ");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = 0;
            for(int k=0;k<2;k++){
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("\nThe multiplication of two matrix is:- \n");
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//Write a program to Find a Character in a String without built-in function
#include<stdio.h>
int main(){
    char str[100],ch;
    int count = 0;
    printf("\nEnter a string:- ");
    gets(str);
    printf("\nEnter a character to find:- ");
    scanf("%c",&ch);
    for(int i=0;str[i] != '\0';i++){
        if(str[i] == ch){
            count++;
        }
    }
    if(count > 0){
        printf("\nThe character '%c' is found %d times in the string.",ch,count);
    }
    else{
        printf("\nThe character '%c' is not found in the string.",ch);
    }
    return 0;

}