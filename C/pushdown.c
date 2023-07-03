#include <stdlib.h>

/* Pushdown stack */

struct node {
	int key;
	struct node *next;
};
static struct node *head, *z, *t;

/* Initialize stack */
void stack_init(void)
{
	head = malloc(sizeof(struct node));
	if (head == NULL)
		exit(EXIT_FAILURE);
	z = malloc(sizeof(struct node));
	if (z == NULL)
		exit(EXIT_FAILURE);
	head->next = z;
	head->key = 0;
	z->next = z;
}

/* Push to stack */
void push(int v)
{
	t = malloc(sizeof(struct node));
	if (t == NULL)
		exit(EXIT_FAILURE);
	t->key = v;
	t->next = head->next;
	head->next = t;
}

/* Pop from stack */
int pop(void)
{
	int x;

	t = head->next;
	head->next = t->next;
	x = t->key;
	free(t);
	return x;
}

/* Checks if stack is empty */
int stackempty(void)
{
	return head->next == z;
}
