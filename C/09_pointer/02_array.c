// pointer array 
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3] = {10,20,30}; //array store
	int *p = a; // pointer store
	int i;
	
	for(i=0;i<3;i++){
		printf("\na[%d] : %d ",i,*(p+i));
	}
	
	getch();
}

