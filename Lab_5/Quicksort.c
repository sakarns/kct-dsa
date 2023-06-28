#include <stdio.h> 
#include<stdlib.h> 

void swap(int *x,int *y) 
{    
	int temp=*x;    
	*x=*y;    
	*y=temp; 
} 

int partition(int A[],int l,int h) 
{    
	int pivot=A[l];    
	int i=l,j=h;        
	do    
	{        
		do{ 
			i++; // i search for element greater than pivot
		}while(A[i]<=pivot);  //increment i until you found element greater than pivot
		      
		do
		{
			j--; // j search for element smaller than pivot 
		}while(A[j]>pivot);     //Decrement j until you found element less than or equal to  pivot
		                  
		
		if(i<j)
			swap(&A[i],&A[j]);    
	}while(i<j);  
	      
	swap(&A[l],&A[j]);    
	return j; 
} 

void QuickSort(int A[],int l,int h) 
{    
	int j;        
	if(l<h)    
	{        
		j=partition(A,l,h);        
		QuickSort(A,l,j);        
		QuickSort(A,j+1,h);    
	}
}

int main() 
{   
	int i,n, A[100];
	printf("Enter how many numbers :");
	scanf("%d", &n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
       
	QuickSort(A,0,n);        
	for(i=0;i<n;i++)        
		printf("%d\t",A[i]);    
	printf("\n");        
	return 0; 
}