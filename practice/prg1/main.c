#include <stdio.h>
#include "utils.h"

int main() {
    // insert code here...
    int try = 0;
    try = getInt();
    printf("%d\n",try);
    link_list();
    pointerExplain();
    printArray();
    showPointer();
    int a=1, b=2;
    printf("a = %d, b = %d\n",a,b);
    swap(&a, &b);
    printf("a = %d, b = %d\n",a,b);
    return 0;
}
