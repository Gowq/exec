#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rbb.h"

int main () {
    int size,value, aux = 0, pos = -1;
    srand(time(NULL));

    scanf("%d %d", &size, &value);
    int *v = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        v[i] = (rand()%10) + aux;
        aux = v[i];
        printf("%d \n", v[i]);
    }
    
    for (int i = 0; i < size; i++) {
        int num1 = value - v[i];

        if (num1 <= 0)
            break;

        //printf("%d - %d = %d\n", value, v[i], num1);
        pos = rbb(v, 0, size-1, num1);
        
        if (pos != -1)
            //printf("POS: %d Value 1: %d  Value 2: %d \n", pos, v[i], num1);
            printf("NUM1: %d: NUM2: %d \n", num1, v[i]);

    }

    free(v);
}