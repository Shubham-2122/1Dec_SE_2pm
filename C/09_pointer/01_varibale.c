// poniter : address of varibale 
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	int *p;//pointer trigger
	
	printf("Enter your number : ");
	scanf("%d",&n);
	
	p = &n; //allocation
	printf("n : %d",n);
	printf("\np : %d",p); // address
	printf("\nponiter : %u",*p); //value
	
	getch();
}
