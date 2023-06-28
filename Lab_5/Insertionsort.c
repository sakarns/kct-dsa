#include <stdio.h> 
#include<stdlib.h> 

void Insertion(int A[],int n) 
{    
	int i,j,x;        
	for(i=1;i<n;i++)    
	{       
		 j=i-1;        
		 x=A[i];        
		 while(j> -1 && A[j]>x)        
		 {            
			 A[j+1]=A[j];            
			 j--;        
		 }        
		 A[j+1]=x;    
	} 
}

int main() 
{   
    int A[100],n, i;
	printf("How many elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	  }         
	Insertion(A,n);

	for(i=0;i<n;i++)        
		printf("%d\t",A[i]);    
	printf("\n");
	return 0; 
}