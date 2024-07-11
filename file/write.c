#include <stdio.h>

void main(){
    FILE *fileWriter = fopen("./file/myFile.txt","w");
    fprintf(fileWriter,"This is my first file with C");
    fclose(fileWriter);
}