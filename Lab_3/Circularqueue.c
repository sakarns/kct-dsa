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
int dequeue(struct Queue *q) ;
void Display(struct Queue q);

	 
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
	        printf("\t1.Insert element to queue \n");
	        printf("\t2.Delete element from queue \n");
	        printf("\t3.Display all elements of queue \n");
	        printf("\t4.Quit \n");
	        printf("\tEnter your choice : ");
	        scanf("%d", &choice);
	        switch (choice)
	        {
	            case 1:
	            	printf("Enter item to insert:");
	            	scanf("%d",&item);
	            	enqueue(&q,item); 
	            	break;
	            case 2:
	            	printf("The Dequeued item is %d\n ",dequeue(&q));
	            	break;
	            case 3:
	            	printf("Items in the queue are:\n");
	           		Display(q);
	            	break;
	            case 4:
	            	exit(1);
	            default:
	            printf("Wrong choice \n\n");
	        } 
		}while(choice<5);
   	
    	return 0; 
	}
void create(struct Queue *q,int size) 
  {    
	  q->size=size;    
	  q->front=q->rear=0;    
	  q->Q=(int *)malloc(q->size*sizeof(int)); 
  } 
  
void enqueue(struct Queue *q,int x)
   {    
	   if((q->rear+1)%q->size==q->front)        
	   		printf("Queue is Full\n");   
			    
		else    
		   {        
			   q->rear=(q->rear+1)%q->size;        
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
			q->front=(q->front+1)%q->size;        
			x=q->Q[q->front];    
		}    
	return x; 
	}
	
 void Display(struct Queue q) 
	 {    
		 int i=q.front+1;        
		 do    
		{            
		 	printf("%d ",q.Q[i]);
			i=(i+1)%q.size;    
		}while(i!=(q.rear+1)%q.size);     
		   
		printf("\n");
	 } 
	 