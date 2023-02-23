#define _GNU_SOURCE
#include "Matrix.h"


struct matrix{
    int x;
    int y;
    int *data;
};

matrix_t* matrix_create(int x, int y, int *data){
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
}
