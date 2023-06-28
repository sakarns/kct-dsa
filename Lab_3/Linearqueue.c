#include <stdio.h> 
#include <stdlib.h> 
struct Queue 
{    
int size;    
int front;    
int rear;    
int *Q; 
};

 void create(struct Queue *q,int size) ;
 void enqueue(struct Queue *q,int x);
 int dequeue(struct Queue *q);
 void Display(struct Queue q) ;
 
 
	int main() 
	{    
		int maxsize;
		struct Queue q;
		printf("Enter the size of queue:"); 
		scanf("%d",&maxsize);    
		create(&q,maxsize);
		int choice;
		int item;
	    do
	    {
	        printf("1.Insert element to queue \n");
	        printf("2.Delete element from queue \n");
	        printf("3.Display all elements of queue \n");
	        printf("4.Quit \n");
	        printf("Enter your choice : ");
	        scanf("%d", &choice);
	        switch (choice)
	        {
	            case 1:
	            	printf("Enter item to insert:");
	            	scanf("%d",&item);
	            	enqueue(&q,item); 
	            	break;
	            case 2:
	            	printf("The Dequeued item is %d ",dequeue(&q));
	            	break;
	            case 3:
	            	printf("Items in the queue are:\n");
	           		Display(q);
	            	break;
	            case 4:
	            	exit(1);
	            default:
	            printf("Wrong choice \n");
	        } 
		}while(choice<5);
   	
    	return 0; 
	}
	
	void create(struct Queue *q,int size) 
	 	{    
		  q->size=size;   
		  q->front=q->rear=-1;    
		  q->Q=(int *)malloc(q->size*sizeof(int)); 
		} 
	
void enqueue(struct Queue *q,int x)
		{    
		 if(q->rear==q->size-1)        
		 	printf("Queue is Full");   
		 else   
			  {       
			  q->rear++;        
			  q->Q[q->rear]=x;
			  } 
		} 

int dequeue(struct Queue *q) 
		{    
		int x=-1;        
		if(q->front==q->rear)        
			printf("Queue is Empty\n");    
		else    
		{
	     q->front++;        
		 x=q->Q[q->front];    
		}    
		return x; 
		
		}
	 
void Display(struct Queue q) 
		{    
		int i;        
		for(i=q.front+1;i<=q.rear;i++)        
		printf("%d ",q.Q[i]);    
		printf("\n"); 
		} 