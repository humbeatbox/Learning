#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void countDice();
int main() {
    srand(time(0));
    int counter[6] = {0};
    for(int i = 1; i<=6000; ++i){
        int dice = rand() % 6+1;
        counter[dice-1]++;
    }

    for (int j = 0; j < 6; ++j) {
        printf("Times of Number %d is %d\n",j+1,counter[j]);
    }
    countDice();
    return 0;
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