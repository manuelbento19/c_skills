#include <stdio.h>

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

void main(){
    enum Level gameLevel = MEDIUM;
    printf("Game Level: %d \n", gameLevel);
}