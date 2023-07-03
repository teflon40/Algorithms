
/****************************************
 * Pushdown stack data structure	*
 *    Operations on push onto stacks	*
 *    and pop from stacks using arrays	*
 ****************************************/

#define MAX 100
static int stack[MAX + 1], p;

/* Initialize stack */
void stack_init(void)
{
	p = 0;
}

/* Push to stack */
void push(int v)
{
	stack[p++] = v;
}

/* Pop from stack */
int pop(void)
{
	return stack[--p];
}

/* Checks if stack is empty */
int stack_empty(void)
{
	return !p;
}
