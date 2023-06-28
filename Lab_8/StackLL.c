// Stack as a Linked List Implementation
#include <stdio.h> 
#include <stdlib.h> 

struct Node {    
int info;    
struct Node *next; 
}*top=NULL;

void push(int x);
int pop();
void Display();


int main() 
{   
	int choice;
	int item;
	while(1)
	    {
	        printf("\n1.Push item to stack Linked List \n");
	        printf("2.Pop item from stack Linked List \n");
	        printf("3.Display all elements of Stack  \n");
	        printf("4.Quit \n");
	        printf("\nEnter your choice : ");
	        scanf("%d", &choice);
	        switch (choice)
	        {
	            case 1:
	            	printf("Enter item to push:");
	            	scanf("%d",&item);
	            	push(item);
	            	break;
	            case 2:
	            	printf("The popped item is %d\n",pop());
	            	Display();
	            	break;
	            case 3:
	            	printf("Items in the stacks are:\n");
	           		Display();
	            	break;
	            case 4:
	            	exit(1);
	            default:
	            printf("Wrong choice \n");
	        } 
		}
	return 0; 
}

void push(int x) 
{    
	struct Node *newnode;    
	newnode=(struct Node*)malloc(sizeof(struct Node));        
	if(newnode==NULL)        
		printf("stack is full\n");    
	else    
	{        
		newnode->info=x;        
		newnode->next=top;        
		top=newnode;    
	}    
} 

int pop() 
{    
	struct Node *t;    
	int x=-1;        
	if(top==NULL)        
		printf("Stack is Empty\n");    
	else    
	{        
		t=top;
		top=top->next;        
		x=t->info;        
		free(t);    
	}    
	return x; 
} 
		
void Display() 
{    
	struct Node *p;    
	p=top;    
	while(p!=NULL)    
	{        
		printf("%d ",p->info);        
		p=p->next;    
	}    
	printf("\n"); 
}