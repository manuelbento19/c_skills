#include <stdio.h>

void main(int argc,char** argv){
    for(int i=1; i < argc;i++){
        printf("Dev: Strings - %s\n",argv[i]);
    }
}