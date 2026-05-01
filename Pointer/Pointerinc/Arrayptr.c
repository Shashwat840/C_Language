#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int *ptr;
    ptr = a; // ptr points to the first element of the array a
    for(int i=0; i<5; i++){
        printf("%d ", *(ptr+i)); // dereferencing the pointer to get the value
         // moving the pointer to the next element of the array
    }
    for(int i=0; i<5; i++){
        printf("%d ", *(ptr+i)); // accessing the array elements using index
    }
    return 0;
}