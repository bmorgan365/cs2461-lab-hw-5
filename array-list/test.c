#include <stdio.h>
#include <stdlib.h>
#include "array_list.h"

int main(void){
        struct array_list* a = al_create();
        int i;
        al_add(a, 4);
        al_size(a);
        al_remove(a, 0);
        al_add(a, 54);
        for(i = 0; i < al_size(a); i++){
                printf("The value at index %d is %d.", i, al_get(a, i));
        }
        return 0;
}
