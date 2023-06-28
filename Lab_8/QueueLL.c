// Queue Linked List Implementation
#include <stdio.h> 
#include <stdlib.h>
 
struct Node {    
	int info;    
	struct Node *next;    
}*front=NULL,*rear=NULL;
 
void enqueue(int x); 
int dequeue();
void Display();


int main() 
	{    
		int choice;
		int item;
	    while(1)
	    {
	        printf("\n1.Enqueue element to queue linked list \n");
	        printf("2.Dequeue element from queue linked list \n");
	        printf("3.Display all elements of queue linked list \n");
	        printf("4.Quit \n");
	        printf("\nEnter your choice : ");
	        scanf("%d", &choice);
	        switch (choice)
	        {
	            case 1:
	            	printf("Enter item to insert:");
	            	scanf("%d",&item);
	            	enqueue(item); 
	            	break;
	            case 2:
	            	printf("The Dequeued item is %d\n ",dequeue());
	            	break;
	            case 3:
	            	printf("Items in the queue are:\n");
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

void enqueue(int item) 
{    
	struct Node *newnode;    
	newnode=(struct Node*)malloc(sizeof(struct Node));    
	if(newnode==NULL)        
		printf("Queue is FUll.\n");    
	else    
	{        
		newnode->info=item;        
		newnode->next=NULL;        
		if(front==NULL)      //if empty       
			front=rear=newnode;        
		else        
		{            
			rear->next=newnode;            
			rear=newnode;        
		}    
	}    
} 

int dequeue() 
{    
		int x=-1;    
		struct Node* temp;        
		if(front==NULL)
        	printf("Queue is Empty.\n");    
		else    
		{        
			x=front->info;        
			temp=front;        
			front=front->next;        
			free(temp);    
		}    
	return x; 
} 

void Display() 
	{    
		struct Node *p=front;    
		while(p)    
		{        
			printf("%d ",p->info);        
			p=p->next;    
	}    
	printf("\n"); 
} 