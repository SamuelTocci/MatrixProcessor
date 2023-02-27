#define _GNU_SOURCE

#include <stdio.h>
#include "Matrix.h"
#include "Product.h"

int main(){
    int testData[3] = {0,1,2};
    matrix_t * m = matrix_create(2,2,testData);
    printf("%s", "## Matrix test ##\n");
    matrix_print(&m);
    printf("%s", "## Product test ##\n");
    product_t * product = product_create(m,NULL);
    product_node_t * pn = product_node_create(NULL, m, NULL);
    product_set_head(&product, &pn);
    product_node_print(&pn);
    printf("End of Main\n");
    return 0;
}