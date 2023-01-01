typedef struct snode {
    struct snode *next;
    int val;
} snode;

void s_insert(snode *root, snode *new_node);
void s_traverse_val(snode *root);
void s_delete_node(snode *root, snode *rem);

