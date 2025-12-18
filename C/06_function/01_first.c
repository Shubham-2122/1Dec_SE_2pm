/*	1) without arrgument and without return value
	syntax : 
	void-int fucntion-name(){
		...loic;
	}
	
	function-name()
*/

#include<stdio.h>
#include<conio.h>

// without argument void
void xy(){
	printf("\nHello this Function call...\n");
}

void data()
{
	int i;
	for(i=1;i<=20;i++){
		printf("*");
	}
}

void main()
{
	
	data();
	xy();
	data();
	getch();
}
