#include "array_list.h"

struct array_list* al_create(void){
    struct array_list* a = (struct array_list*)malloc(sizeof(struct array_list));
    int* arr = (int*)malloc(sizeof(int * INITIAL_SIZE));
    a->array = arr;
    a->size = 0;                                        //used as index for value entry
    a->capacity = INITIAL_SIZE;
    return a;
}

void al_add(struct array_list* list, int value){
    list->size++;
    int newCapacity, i;
    if(list->capacity == list->size){                    //adding element to size + 1
        newCapacity = list->capacity * 1.5;
        int* newArr = (int*)malloc(int * newCapacity);
        for(i = 0; i < list->capacity; i++){
            newArr[i] = list->arr[i];
        }
        list->arr = newArr;
        list->capacity = newCapacity;
    }
    list->array[list->size] = value;
}

int al_get(struct array_list* list, int index){

}

void al_set(struct array_list* list, int index, int value){

}

void al_remove(struct array_list* list, int index){

}

int al_size(struct array_list* list){

}

void al_destroy(struct array_list* list){

}
