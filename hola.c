void	print_stack(int *stack)
{
	printf("Stack: ");
	for (int i = stack[1]; i < stack[0]; i++)
	{
		printf("%i ", stack[i]);
	}
	printf("\n");
}
void pop(int *stack)
{
	const int len = stack[0];
	int a_top = stack[1];

	if (a_top + 1 < len)
	{
		stack[1] = a_top + 1;
	}
}
void push(int *stack)
{
	const int len = stack[0];
	int a_top = stack[1];
	if (a_top > 2)
		stack[1] -= 1;
}
int main(void)
{
	int stack[7] = {7, 2, 1, 2, 3, 4, 5};

	print_stack(stack);
	pop(stack);
	print_stack(stack);
	push(stack);
	print_stack(stack);
}