#define _GNU_SOURCE
#include "Matrix.h"
#include <stdlib.h>
#include <stdint.h>


struct matrix{
    uint16_t x; //2 byte
    uint16_t y; //2 byte
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
    return matrix;
}

matrix_t* matrix_padEnd(matrix_t **matrix, int amount){
    (*matrix)->data = realloc(sizeof((*matrix)->data)+amount);
    return matrix;
}
