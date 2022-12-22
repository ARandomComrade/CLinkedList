#include <stdio.h>
#include "dnode.h"

void d_insert(struct dnode *root, struct dnode *new_node) {
    if (root != NULL && new_node != NULL) {
        if(root->next == NULL) {
            root->next = new_node;
            new_node->prev = root;
        } else {
            struct dnode *tmp;
            tmp = root->next;
            root->next = new_node;
            new_node->prev = root;
            new_node->next = tmp;
            tmp->prev = new_node;
        } 
    }
}

void d_traverse_val(struct dnode *root) {
    struct dnode *ptr;
    for(ptr = root; ptr != NULL; ptr = ptr->next) {
        printf("%c\n", ptr->val);
    }
}

void d_delete_node(struct dnode* root, struct dnode *rem) {
    if(root != NULL && rem != NULL) {
        struct dnode *ptr, *tmp_n, *tmp_p;
        for(ptr = root; ptr != NULL; ptr = ptr->next) {
            if(ptr == rem) {
                tmp_n = ptr->next;
                tmp_p = ptr->prev;
                tmp_n->prev = tmp_p;
                tmp_p->next = tmp_n;
                ptr->next = NULL;
                ptr->prev = NULL;
            }
        }
    } else {
        printf("one or more inputs is invalid!\n");
    }
}