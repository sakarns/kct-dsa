#include <stdio.h>
#include<stdlib.h> 

void swap(int *x,int *y) 
{    
	int temp=*x;    
	*x=*y;    
	*y=temp; 
} 
void SelectionSort(int A[],int n) 
{    
	int i,j,min;        
	for(i=0;i<n-1;i++)    
	{    
		min=i;    
			for(j=i+1;j<n;j++)        
			{            
				if(A[j]<A[min])                
				min=j;        
			} 
			
		if(min!=i)
			{
				swap(&A[i],&A[min]); 
			}       
		   
	} 
}
int main() 
{   
	int A[100],n,i;
	printf("How many elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	  }                 

	SelectionSort(A,n);        
	for(i=0;i<n;i++)        
		printf("%d\t",A[i]);    
	printf("\n");        
	return 0;
}