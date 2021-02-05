#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*top = NULL, *cur;
void push()
{
	cur = (struct node*)malloc(sizeof(struct node));
	printf("Enter current node data:\n");
	scanf("%d",&(cur -> data));
	cur -> next = top;
	top = cur;
}
void pop()
{
	cur = top;
	top = cur -> next;
	printf("Deleted element is: %d\n", (cur -> data));
	cur -> next = NULL;
	free(cur);
}
void display()
{
	if(top == NULL)
	printf("stack underflow\n");
	else
	{
		cur = top;
		printf("stack =>");
		while(cur!=NULL)
		{
			printf("%d->", cur -> data);
			cur = cur -> next;
		}
	}
}
void peek()
{
	if(top!=NULL)
	printf("The top most element is: %d\n", top -> data);
	else
	exit(1);
}
int main()
{
	int ch;
	while(1)
	{
		printf("programs for stack\n");
		printf("1: push\n");
		printf("2: pop\n");
		printf("3: display\n");
		printf("4: peek\n");
		printf("5: exit\n");
		printf("---------\n");
		printf("Enter your choice\n");
		scanf("%d, &ch");
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: peek();
			break;
			case 5: exit(0);
		}
	}
	return 0;
}

















