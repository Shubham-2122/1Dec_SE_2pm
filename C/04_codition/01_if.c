/* 
	if(codiditon){
		...code
	}
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	
	int age;
	printf("enter your age : ");
	scanf("%d",&age);
	
	printf("Age : %d",age);
	
	
//	if(age>18){
//		printf("\nage is allow..");
//	}
	
//	if(age>=18){
//		printf("\nage is allow..");
//	}

	if(age<=18){
		printf("\nage is not allow..");
	}
	
	getch();
}
