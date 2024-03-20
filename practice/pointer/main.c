#include <stdio.h>

int main() {
    int* ptr;
    int var=3;
    printf("address of ptr is %p\n",ptr);
    printf("address of var is %p\n",&var);
    printf("var is %d\n",var);
    ptr = &var;//set the point to the address of var
    *ptr = 5;//set the value of the value in the ptr address as 5
    printf("set the value of the value in the ptr address is %d\n",*ptr);
    printf("var now is %d\n",var);
    return 0;
}
