#include <stdio.h>

void main(){
    FILE* fileReader = fopen("./file/myFile.txt","r");
    
    if(fileReader!=NULL){
        char content[100];
        fgets(content, 100, fileReader);
        printf("%s",content);
    }
    fclose(fileReader);
}