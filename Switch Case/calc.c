#include <stdio.h>
int main(){
    int no1,no2,choice,ans;
    printf("\nEnter number 1:- ");
    scanf("%d",&no1);
    printf("\nEnter number 2:- ");
    scanf("%d",&no2);
    while(choice !=5){
        printf("\n---------------Caculator-------------");
        printf("\n1)Addition....");
        printf("\n2)Subtraction....");
        printf("\n3)Multiplication....");
        printf("\n4)Division....");
        printf("\n5)Exit...");
        printf("\nEnter your choice:- ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: ans = no1+no2;
                    printf("\nAddition = %d",ans);
                    break;
            case 2: ans = no1-no2;
                    printf("\nSubtraction = %d",ans);
                    break;
            case 3: ans = no1*no2;
                    printf("\nMultiplication = %d",ans);
                    break;
            case 4: ans = no1/no2;
                    printf("\nDivision = %d",ans);
                    break;    
            case 5: printf("\nExiting the program...");
                    break;
            default : printf("\nEnter valid choise.....");
        }//end of switch
    }//end of while 
    return 0;
}//end of main