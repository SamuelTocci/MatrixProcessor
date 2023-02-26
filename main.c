#define _GNU_SOURCE

#include <stdio.h>
#include "Matrix.h"

int main(){
    int testData[3] = {0,1,2};
    matrix_t * m = matrix_create(2,2,testData);
    matrix_print(&m);
    printf("End of Main\n");
    return 0;
}