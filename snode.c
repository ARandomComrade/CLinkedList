#include <stdio.h>
#include <stddef.h>
#include "snode.h"

void s_insert(snode *root, snode *new_node) {
    if (root != NULL && new_node != NULL) {
        new_node->next = root->next;
        root->next = new_node;
    } else {
        printf("one or more inputs is null!\n");
    }
}

void s_traverse_val(snode *root) {
    snode *ptr;
    for (ptr = root; ptr != NULL; ptr = ptr->next) {
        printf("%d\n", ptr->val);
    }
}

void s_delete_node(snode *root, snode *rem) {
    snode *tmp, *ptr;
    if (root != NULL && rem != NULL) {
        for (ptr = root; ptr != NULL; ptr = ptr->next) {
            if (ptr->next == rem) {
                tmp = ptr->next;
                ptr->next = tmp->next;
                tmp->next = NULL;
            }
        }
    } else {
        printf("one or more inputs is invalid!\n");
    }
}

