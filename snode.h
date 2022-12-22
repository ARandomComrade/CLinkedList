struct snode {
    struct snode *next;
    int val;
};

void s_insert(struct snode *root, struct snode *new_node);
void s_traverse_val(struct snode *root);
void s_delete_node(struct snode *root, struct snode *rem);

