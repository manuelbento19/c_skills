#include<stdio.h>

void main(){
    int myAge = 22;
    int* myAgePointer = &myAge;

    printf("myAge address: %p \n", &myAge);
    printf("myAgePointer address: %p \n", myAgePointer);
}