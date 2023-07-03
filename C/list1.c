#include <stdlib.h>

struct node {
	int key;
	struct node *next;
};
struct node *head, *z, *t;

/* Initialize a list */
void list_intitialize(void)
{
	head = (struct node *) malloc(sizeof *head);
	z = (struct node *) malloc(sizeof *z);
	head->next = z;
	z->next = z;
}

/* Delete the next node */
delete_next(struct node *t)
{
	t->next = t->next->next; /* Bypasses the node to be deleted */
}

/* Insert after a specific node */
struct node *insert_after(int v, struct node *t)
{
	struct node *x;
	x = (struct node *) malloc(sizeof *x);
	x->key = v;
	x->next = t->next;
	t->next = x;
	return x;
}
