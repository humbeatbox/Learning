#include <stdio.h>
#include "utils.h"
#include <stdint.h>

int32_t abs(int32_t x){
    int32_t mask = ( x >> 31 );
    return (x + mask) ^ mask;
}


int main() {
    // insert code here...
/*    int try = 0;
    try = getInt();
    printf("%d\n",try);
    link_list();
    pointerExplain();
    printArray();
    showPointer();
    int a=1, b=2;
    printf("a = %d, b = %d\n",a,b);
    swap(&a, &b);
    printf("a = %d, b = %d\n",a,b);*/
    //showPointer();

    //uintptr_t x = (uintptr_t)((void*)&_mi_random_init);

    int a = 0;
    a = abs(-2345);
    printf("%d",a);
    return 0;
}
