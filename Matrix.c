#define _GNU_SOURCE
#include "Matrix.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>


struct matrix{
    uint16_t x; //Amount of Columns (2 bytes)
    uint16_t y; //Amount of Rows (2 bytes)
    int *data; //TODO: define exact data type for efficiency
};

matrix_t* matrix_create(int x, int y, int data[]){
    matrix_t * matrix;
    matrix = malloc(sizeof(struct matrix));
    matrix->x = x;
    matrix->y = y;
    matrix->data = data;
    return matrix;
}

void matrix_free(matrix_t **matrix){
    free((*matrix)->data);
    free(*matrix);
    *matrix = NULL;
}

matrix_t* matrix_padStart(matrix_t **matrix, int amount){
    return *matrix;
}

matrix_t* matrix_padEnd(matrix_t **matrix, int amount){
    //(*matrix)->data = realloc(matrix,sizeof((*matrix)->data)+amount*sizeof(int));
    return *matrix;
}

int * matrix_getData(matrix_t **matrix){
    return (*matrix)->data;
}

void * matrix_2decompose(matrix_t **matrix){
    void * decomposed; //array of ptrs to the decomposed matrices

    return decomposed;
}

void * matrix_3decompose(matrix_t **matrix){
    void * decomposed; //array of ptrs to the decomposed matrices

    return decomposed;
}

void matrix_print(matrix_t **matrix){
    printf("[%d, %d]: ", (*matrix)->x, (*matrix)->y);

    int data_size = (*matrix)->x + (*matrix)->y -1; //Size of the data vector
    for(int i = 0; i < data_size; i++){
        printf("%d \t", (*matrix)->data[i]);
    }
    printf("\n");

}