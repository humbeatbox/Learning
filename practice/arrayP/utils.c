//
// Created by Gary Chang on 2024-03-14.
//

#include "utils.h"
int getInt(){
    int ret;
    char trash = ' ';
    while(scanf("%d%c",&ret,&trash) != 2
            || trash!= '\n'){
        flushKey();
        printf("Bad number input again!\n>");
    }
    return ret;
}

double getDbl(){
    double ret;
    scanf("%lf",&ret);
    flushKey();
    return ret;
}

void getLine(char line[]){
    scanf("%[^\n]",line);
    flushKey();
}
void flushKey(){
    while(getchar() != '\n');
}