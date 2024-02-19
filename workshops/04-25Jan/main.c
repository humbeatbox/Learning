/*
 * type
 * integers:
 *      char        8 bits          1 bytes long 2 to power 8
 *      short       16 bots long    2 bytes
 *      int         32 bits         4 bytes
 *      long        32 bits -> 64   4 or 8 bytes
 *      long long   64  bits        8 bytes
 *floating:
 *  float
 *  double
 *  long double
 *
 *  stdio
 *  Formate specifiers for IO
 *  char    %c
 *  int     %d
 *  floats  %f
 *  double  %lf
 *
 * */
#include <stdio.h>
//int ASCI(void);

int main(void){
    char c = 'A';
    printf("%d, %c\n",c,c);

    int a = 2;
    printf("%d\n",++a);
    a = 2;
    printf("%d\n",a++);
    printf("%d",a);

    /*int loonies;
    double cash;

    printf("Loonies ? ");
    scanf("%d", &loonies);
    cash = loonies; // promotion
    printf("Cash is $%.2lf\n", cash);
*/
    return 0;
}
/*

int main(void) {

    ASCI();
    int noOfCoffees = 0;
    int counter = 0;
    double price = 0;
    double totalPrice = 0.0;

    printf("Please enter the number of coffees:\n>");
    scanf("%d",&noOfCoffees);

    while (counter < noOfCoffees){
        printf("Please enter the price of number %d of coffees:\n>",counter+1);
        printf("%d> ",counter+1);
        scanf("%lf",&price);

        totalPrice = totalPrice + price;
        counter = counter +1;
    }
    //total = noOfCoffees;
    //printf("Please pay: %lf\n",total);
    printf("Please pay: %.2lf\n",totalPrice);

    return 0;
}


//show how to change char to number
int ASCI(void){
    char ch = 'a';
    printf("Lower letter look like\n");
    while(ch <= 'z'){
        printf("%c is %d\n", ch, ch);
        ch = ch + 1;
    }

    ch = 'A';
    printf("Upper case look like\n");
    while(ch <= 'Z'){
        printf("%c is %d\n", ch, ch);
        ch = ch + 1;
    }



}*/
