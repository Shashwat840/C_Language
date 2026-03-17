// C program to find largest even numbers and odd numbers in an array
#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter elements of array:- ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (a[i] < a[j] && a[j] % 2 == 0)
                {
                    a[i] = a[j];
                }
            }
        }
        else
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (a[i] < a[j] && a[j] % 2 != 0)
                {
                    a[i] = a[j];
                }//end of inner if
            }
        }//end of else
    }//end of outermost for
    printf("\nLargest even number is:- %d", a[0]);
    printf("\nLargest odd number is:- %d", a[1]);
    return 0;
}