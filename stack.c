#include<stdio.h>
#include<stdlib.h>
#define size 5

struct stack
{
	int info[size];
	int top;
};

int isEmpty(struct stack *s)
{
	if (s->top == -1)
		return 1;
	else
		return 0;
}

int isFull(struct stack *s)
{
	if (s->top == size - 1)
		return 1;
	else 
		return 0;
	
}

void push(struct stack *s, int x)
{
	if (isFull(s))
	{
		printf("Stack overflow");
	}
	else
	{
		s->info[++s->top] = x;
		printf("\nInserted -> %d", x);
	}
}

void Display(struct stack *s)
{
	printf("\nThe stack elements are/is :: ");
	for (int i = 0; i <= s->top ; i++)
	{
		printf("%d ", s->info[i]);
	}
}

void pop(struct stack *s)
{

	if (isEmpty(s))
	{
		printf("Stack is empty");
	}
	else
	{
		printf("\nDeleted -> %d", s->info[s->top]);
		s->top--;
	}
}


int main()
{
	struct stack *stack;
	stack = (struct stack *)malloc(sizeof(struct stack));
	stack->top = -1;
	push(stack, 10);
	push(stack, 30);
	push(stack, 54);
	push(stack, 56);
	Display(stack);
	pop(stack);
	Display(stack);
	pop(stack);
	pop(stack);
	Display(stack);
	return 0;
}