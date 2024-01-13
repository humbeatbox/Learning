//
//  main.c
//  practice
//
//  Created by Gary Chang on 2023-12-30.
//

#include <stdio.h>
#include <stdlib.h>



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
    
    head->data = 20;
    mid->data = 40;
    last->data = 60;
    
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
