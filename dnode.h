struct dnode {
    struct dnode *next;
    struct dnode *prev;
    char val;
};

void d_insert(struct dnode *root, struct dnode *new_node);
void d_traverse_val(struct dnode *root);
void d_delete_node(struct dnode* root, struct dnode *rem);
