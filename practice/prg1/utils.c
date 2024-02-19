//
// Created by Gary Chang on 2024-02-19.
//

#include "utils.h"
#include "stdio.h"
#include <stdlib.h>

int getInt(void){
    int ret = 0;
    scanf("%d",&ret);
    flushKey();
    return ret;
}

void flushKey(void){
    char ch;
    do{
        ch = getchar();
    } while (ch != '\n');
}

void swap(int* px, int* py) {
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void printArray(void){
    int a[3] = {1, 2, 3};
    int* p = a;

    for (int i=0; i<sizeof(a)/sizeof(a[0]); ++i) {
        printf("*(p + %d): %d\n", i, *(p+i));
    }
}
void pointerExplain(void){

    int num1 = 5;
    int num2;
    int *p = NULL;
    printf("num1 = %d\n",num1);
    p = &num1;
    printf("number of p is %d\n",*p);
    num2 = *p + 2; // num2 變成 (5+2) 7
    printf("num2 = *p + 2 =  %d\n",num2);
    num2 += *p;    // num2 變成 (7+5) 12

    *p = num2;        // num1 從5變成 12
    (*p)++;           // num1 變成 (12++) 13

}



// Main
void showPointer(void) {
    printf("Show List Start!\n");
    int b = 2;
    int* pointer = &b;
    printf("變數 b 的值：%d\n", b);
    printf("變數 b 的地址：%p\n", &b);
    printf("pointer 的值：%p\n", pointer);
    printf("\n"); //換行

    *pointer = 100;
    printf("*pointer 的值：%d\n", *pointer);
    printf("變數 b 的值：%d\n", b);
    printf("變數 pointer 的地址：%p\n", &pointer);
    printf("變數 b 的地址：%p\n", &b);

    printf("Show List End!\n");

}


void link_list(void){
    printf("Link List Start!\n");
    struct node{
        int data;
        struct node *next;
    };

    struct node *head, *mid, *last;
    head = malloc(sizeof(struct node));
    mid = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head->data = 10;
    mid->data = 20;
    last->data = 30;

    head->next = mid;
    mid->next = last;
    last->next  = NULL;

    struct node *temp = head;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;

    }
    printf("\n") ;

    printf("Link List End!\n");
}