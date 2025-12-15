/* 
	if(codiditon){
		...code
	}
	else if(codition){
		..code
	}
	else{
		..code;
	}
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	printf("Enter your marks (0-100) : ");
	scanf("%d",&marks);
	printf("marks : %d",marks);
	
	
	if(marks>100 || marks<0){
		printf("\ninvalid marks..");
	}
	else if(marks >=85 && marks<=100){
		printf("\nA grade student..");
	}
	else if(marks >=70 && marks<85){
		printf("\nB grade Student...");
	}
	else if(marks <70 && marks >=55){
		printf("\nC grade Student..");
	}
	else if(marks>=34 && marks <=54){
		printf("\nD grade Student..");
	}
	else{
		printf("\nfaild student..");
	}

	getch();
	
}
