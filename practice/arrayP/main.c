#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int counter[6] = {0};

    for(int i = 1; i<=6000; ++i){
        int dice = rand() % 6+1;
        for (int j = 1; j <= 6 ; ++j) {
            if (dice == j){
                counter[j-1]++;
            }
        }
    }
    for (int j = 0; j < 6; ++j) {
        printf("Times of Number %d is %d\n",j+1,counter[j]);
    }

    return 0;
}
