#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "report.h"
#include "strcuture.h"
#include "utils.h"


void countDice();
void arraySearch();
void arrayRangeSearch();
void creatRandomNumber(int counter[],int index);
void cRanUnrepeatNum();

int main() {
    struct student gary ;
    gary = readStudentFile();
    prnStudentInformation(gary);

    struct student class1[10];

//    gary.hight = getInt();
//    printf("%d\n",gary.high);
//    printf("%s\n",gary.name);


    //srand(time(0));
    //int counter[6] = {0};
    //cRanUnrepeatNum();
    //creatRandomNumber(counter,6);
    //countDice();
    //arraySearch();
    //arrayRangeSearch();

    return 0;
}
void creatRandomNumber(int counter[],int index){

    for(int i = 1; i<=6000; ++i){
        int dice = rand() % 6+1;
        counter[dice-1]++;
    }

    for (int j = 0; j < index; ++j) {
        printf("Times of Number %d is %d\n",j+1,counter[j]);
    }
}

void countDice(){
    srand(time(0));
    int counter[11] = {0};
    for (int i = 0; i <= 100000 ; i++) {
        int dice1 = rand() %6 +1;
        int dice2 = rand() %6 +1;
        int sum = dice1 + dice2;
        counter[sum-2]++;
    }
    for (int i = 2; i <=12 ; i++) {
        printf("%d: %d\n",i,counter[i-2]);
    }
}

void arraySearch(){
    int i,n[5] = {0};
    for(i = 0; i < 5; i++) {
        printf("%d : ",i+1);
        scanf("%d",&n[i]);
    }
    while(1) {
        printf("輸入要查詢的格，0為結束查詢\n");
        scanf("%d",&i);
        if(i == 0) {
            break;
        }
        printf("%d = %d\n",i,n[i-1]);
    }
}

void arrayRangeSearch(){
    int n[10];
    printf("Input 10 number:\n");
    for (int i = 0; i <= 9; i++) {
        printf("Number %d is :",i+1);
        scanf("%d", &n[i]);
    }
     while(1){
        int L,R;
        printf("L R:");
        scanf("%d%d",&L,&R);
        if (L == 0 && R == 0)
             break;
        printf("Ans: ");
        for (int i = 0; i < 10; i++) {
            if(n[i]>=L && n[i]<=R){
                printf("%d ",n[i]);
            }
        }
        printf("\n");
     }
}

void cRanUnrepeatNum(){
    char str[50];
    printf("input\n");
    //scanf("%[^\n]",str);
    scanf("%s",str);
    printf("%s",str);
}