/*3) with arrgument and without return value  
	syntax 
	int function-name(int a,int b){
		printf("sum :",a+b);
	}
	
	function-name(20,10)
*/

#include<stdio.h>
#include<conio.h>

void sub(int a,int b){
	int subdata;
	subdata = a-b;
	printf("\nSub : %d",subdata);
}

void main()
{
	sub(50,20);
	sub(60,20);
	getch();
}
