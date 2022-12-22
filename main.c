#include <stdio.h>
#include <stdlib.h>
#include "snode.h"
#include "dnode.h"

int main(int argc, char *argv[]) {
    struct snode *a, *b, *c;
    struct dnode *x, *y, *z;
    a = malloc(sizeof(struct snode*));
    b = malloc(sizeof(struct snode*));
    c = malloc(sizeof(struct snode*));
    x = malloc(sizeof(struct dnode*));
    y = malloc(sizeof(struct dnode*));
    z = malloc(sizeof(struct dnode*));

    a->val = 1;
    b->val = 2;
    c->val = 3;
    x->val = 'a';
    y->val = 'b';
    z->val = 'c';


    s_insert(a, b);
    s_insert(b, c);
    s_traverse_val(a);
    s_delete_node(a, b);
    s_traverse_val(a);

    d_insert(x, y);
    d_insert(y, z);
    d_traverse_val(x);
    d_delete_node(x, y);
    d_traverse_val(x);

    free(a);
    free(b);
    free(c);
    free(x);
    free(y);
    free(z);

    return 0;
}
