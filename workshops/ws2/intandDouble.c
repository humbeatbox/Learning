#include <stdio.h>

double getDouble(void);

int main(void){

    int n1, n2, sum;
    
    printf("Enter the two number to calculate the sum:\n");

    n1 = getDouble();
    n2 = getDouble();
    sum = n1 + n2;
    printf("%d + %d = %d\n",n1,n2,sum);
    return 0;
}

double getDouble(){
    double theValue;
    printf(">");
    scanf("%lf", &theValue);
    return theValue;
}

