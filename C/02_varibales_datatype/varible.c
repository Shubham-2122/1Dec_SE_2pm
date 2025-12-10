//varibales : it's a store value in single varibale
/* Rules
	1) do not start with number ex 1shubham
	2) do not start with symbols $%#sfs
	3) do not start with keyword void 32 keyword
	
	syntax : 
	datatype varible-name = value
	
	datatype
	1) int : -+value number %d,%i
	2) float : . decimal number %f
	3) long %l
	4) dobule %lf
	5) char : 'A' %c
*/

#include<stdio.h>
#include<conio.h>

void main(){
	
	int a = 20;
	int b = 30;
	
	int c = 50.57;
	
	printf("A : %d",a);
	printf("\nB : %d",b);
	
	printf("\nC : %i",c);
	
	float num = 30.567;
	
	printf("\nnum : %f",num);
	printf("\nnum : %.2f",num);
	
	char name1 = 'A';
	printf("\n%c",name1);
	
//	printf("Hello varibales..");
	getch();
}
