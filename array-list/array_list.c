#include "array_list.h"

struct array_list* al_create(void){
    struct array_list* a = (struct array_list*)malloc(sizeof(struct array_list));
    int* arr = (int*)malloc(sizeof(int) * INITIAL_SIZE);
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
        int* newArr = (int*)malloc(sizeof(int) * newCapacity);
        for(i = 0; i < list->capacity; i++){
            newArr[i] = list->array[i];
        }
        list->array = newArr;
        list->capacity = newCapacity;
    }
    list->array[list->size] = value;
}

int al_get(struct array_list* list, int index){
    if(index > list->capacity){                         //return -1 if index greater than current index
        return -1;
    }
    return (list->array[index]);
}

void al_set(struct array_list* list, int index, int value){
    if(index > list->capacity){
        return -1;                                      //return -1 if index to add greater than current index
    }
    list->array[index] = value;
}

void al_remove(struct array_list* list, int index){
    int i, temp;
    if(index > list->capacity){
        return -1;                                      //return -1 if index to remove is greater than capacity
    }
    list->array[index] = 0;                             //delete element, set to 0
    for( i = index; i < list->capacity; i++){
        temp = list->array[i+1];
        list->array[i] = temp;
    }
}

int al_size(struct array_list* list){
    return list->size;
}

void al_destroy(struct array_list* list){
    free();
}
