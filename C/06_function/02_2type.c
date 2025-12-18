/*4) with argument and with return value 
	syntax 
	int function-name(int a,int b){
		return a-b
	}
	
	function-name(20,10)
*/

#include<stdio.h>
#include<conio.h>

int sum(int a,int b){
	int sum;
	sum = a+b;
	return sum;
}

void main()
{
	int x = sum(30,20);
	
	printf("sum : %d",x);
	printf("\nsum : %d",sum(50,20));
	getch();
}
