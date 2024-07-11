#include <stdio.h>

struct User {
    char name[50];
    char lastName[50];
    char email[50];
    float rate;
    int age;
};

void main(){
    struct User user = {"Manuel", "Bento","manuel@dev.com",8.35,22};
    printf("Name: %s \n", user.name);
    printf("LastName: %s \n", user.lastName);
    printf("FullName: %s %s \n", user.name,user.lastName);
    printf("E-mail: %s \n", user.email);
    printf("Rate: %.1f \n", user.rate);
    printf("Age: %d \n", user.age);
}