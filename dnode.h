typedef struct dnode {
    struct dnode *next;
    struct dnode *prev;
    char val;
} dnode;

void d_insert(dnode *root, dnode *new_node);
void d_traverse_val(dnode *root);
void d_delete_node(dnode* root, dnode *rem);
