//
//  main.c
//  practice
//
//  Created by Gary Chang on 2023-12-30.
//

#include <stdio.h>
#include <stdlib.h>

/*

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
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
    
    printf("End!!\n");
    
    return 88;
}
*/
#include <stdio.h>
void swap(int* px, int* py);
void printArray(void);
void ptrcal(void);

int main(void){
    /*
    int a=1, b=2;
    printf("a = %d, b = %d\n",a,b);
    swap(&a, &b);
    printf("a = %d, b = %d\n\n\n",a,b);
    */
    //int pointer = 99;
    //printf("number is %d ,address is %p or %p\n",pointer,pointer,&pointer);
    /*
    int i[3] = {1, 2, 3};

    printf("i:     %p\n", i);
    printf("&i[0]: %p\n", &i[0]);
    
    int  *ptr = NULL;
     
    printf("ptr 的地址是 %p\n", ptr  );
    */
    //printArray();
    
    //ptrcal();
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
void ptrcal(void){
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


/*
// Main
int main(void) {
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
    return 0;
}
*/
