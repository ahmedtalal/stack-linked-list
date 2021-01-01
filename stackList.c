#include "stackList.h"
#include <stddef.h>

node *head ;

createNode(){
    head = NULL;
}

int isEmpty(){
    if(head == NULL){
        return 0 ;
    }
    return 1 ;
}

void push(int value){
    node *ptr ;
    ptr = (node*) malloc(sizeof(node));
    ptr->data = value ;
    if(isEmpty() == 0){
        ptr->next = NULL;
        head = ptr ;
    }else {
        ptr->next = head ;
        head = ptr ;

    }
    printf("the item is inserted \n") ;
}

void pop(){
    node *temp ;

    if(isEmpty() == 0){
        printf("the stack is empty") ;
    }else {
        temp = head ;
        printf("the item is %d \n" , temp->data) ;
        head = temp->next ;
        free(temp) ;
    }
}

void display(){
    node *temp ;
    if(isEmpty() == 0){
        printf("the stack linked list is empty \n") ;
    }else {
        temp = head ;
        while(temp != NULL){
            printf("%d \t" , temp->data) ;
            temp = temp->next ;
        }
    }
}
