#include "Product.h"
#include "Matrix.h"
#include "Vector.h"

struct product_node {
    product_node_t *parent, *p0, *p1, *p2;
    matrix_t *m;
    vector_t *v;
};

struct product{
    product_node_t *head;
};