#include <stdio.h>
#include <stdlib.h>
#include "array_list.h"

void printList(struct array_list* list);

int main(void){
        struct array_list* a = al_create();
        int i = 6;
        al_add(a, 10);
        al_add(a, 20);
        al_add(a, 30);
        al_add(a, 40);
        al_add(a, 50);
        al_add(a, 60);
        al_add(a, 70);
        al_add(a, 80);
        al_add(a, 90);
        al_add(a, 100);
        al_add(a, 110);
        printList(a);
        al_set(a, 4, 12);
        printList(a);
        al_remove(a,4);
        printList(a);
        //al_destroy(a);
        //printf("List destroyed\n");
        al_add(a, 5);
        printList(a);
        printf("Size: %d\n", al_size(a));
        printf("Capacity: %d\n", a->capacity);
        printf("Value at index %d: %d\n", i, al_get(a, i));

        
        return 0;
}

void printList(struct array_list* list){
        int i;
        if(list == NULL){
                printf("Empty list, can't print elements. . .\n");
        }
        else{
                for(i = 0; i < list->size; i++){
                        printf("Index: %d Value: %d\n", i, al_get(list, i)); 
                }
        }
        
}
