#include<stdio.h>
void addFun();
void subFun();
void multiFun();
void divFun();
void modFun();
void main(){
    int choice;
    while(choice != 6){
        printf("\n---------------------Calculator program--------------------");
        printf("\n1)Addition");
        printf("\n2)Subtraction");
        printf("\n3)Multiplication");
        printf("\n4)Division");
        printf("\n5)Modulus");
        printf("\n6)Exit the program");
        printf("\nEnter your choice:- ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: addFun();
                    break;
            case 2: subFun();
                    break;
            case 3: multiFun();
                    break;
            case 4: divFun();
                    break;
            case 5: modFun();
                    break;
            case 6: printf("\nExiting the program....");
                    break;
            default : printf("\nEnter valid choice:- ");
        }//end of switch
    }//end of while 
}//end of main
void addFun(){
    int no1,no2,ans;
    printf("\nEnter value of number 1:-  ");
    scanf("%d",&no1);
    printf("\nEnter value of number 2:- ");
    scanf("%d",&no2);
    ans = no1 + no2;
    printf("\nAddition = %d",ans);
}
void subFun(){
    int no1,no2,ans;
    printf("\nEnter value of number 1:-  ");
    scanf("%d",&no1);
    printf("\nEnter value of number 2:- ");
    scanf("%d",&no2);
    ans = no1 - no2;
    printf("\nSubtraction = %d",ans);
}
void multiFun(){
    int no1,no2,ans;
    printf("\nEnter value of number 1:-  ");
    scanf("%d",&no1);
    printf("\nEnter value of number 2:- ");
    scanf("%d",&no2);
    ans = no1 * no2;
    printf("\nMultiplication = %d",ans);
}
void divFun(){
    float no1,no2,ans;
    printf("\nEnter value of number 1:-  ");
    scanf("%f",&no1);
    printf("\nEnter value of number 2:- ");
    scanf("%f",&no2);
    ans = no1 / no2;
    printf("\nDivision = %f",ans);
}
void modFun(){
    int no1,no2,ans;
    printf("\nEnter value of number 1:-  ");
    scanf("%d",&no1);
    printf("\nEnter value of number 2:- ");
    scanf("%d",&no2);
    ans = no1 % no2;
    printf("\nModulus = %d",ans);
}