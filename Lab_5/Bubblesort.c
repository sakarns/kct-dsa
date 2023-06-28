#include <stdio.h> 
#include<stdlib.h> 

void swap(int *x,int *y) 
{    
	int temp=*x;    
	*x=*y;    
	*y=temp; 
} 
void Bubble(int A[], int n) 
{    
	int i,j,flag=0;        
	for(i=0;i<n-1;i++)  //passes// 
	{        
		flag=0;        
		for(j=0;j<n-i-1;j++)  //comparision//      
		{            
			if(A[j]>A[j+1])    //adjacent//
			{                
				swap(&A[j],&A[j+1]);                
				flag=1;            
			}        
		}        
		if(flag==0)            
		break;    
	}    
}

int main() 
{   
	int A[100],n, i;
	printf("How may elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	  }  
	Bubble(A,n);

	for(i=0;i<n;i++)        
		printf("%d\t", A[i]);    
	printf("\n");        
	return 0; 
}