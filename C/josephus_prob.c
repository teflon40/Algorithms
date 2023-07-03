#include <stdlib.h>
#include <stdio.h>
/****************************************
 * Josephus problem			*
 *   Finding out the last person to die *
 *   in an army of n men and m counts   *
 *   and also the order in which the	*
 *   death might occur			*
 ****************************************/

struct node {
	int key;
	struct node *next;
};

void josephus(int n, int m)
{
	int i;
	struct node *t, *x;

	t = malloc(sizeof(struct node));
	t->key = 1;
	x = t;
	for (i = 2; i <= n; i++)
	{
		t->next = malloc(sizeof(struct node));
		t = t->next;
		t->key = i;
	}
	t->next = x;
	while (t != t->next)
	{
		for (i = 1; i < m; i++)
			t = t->next;
		printf("%d ", t->next->key);
		x = t->next;
		t->next = t->next->next;
		free(x);
	}
	printf("%d\n", t->key);
}
