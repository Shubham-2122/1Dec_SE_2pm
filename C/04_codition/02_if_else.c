 /*
 	if(codition){
		...code 
	}
	else{
		..code
	}
 
  */
  
#include<stdio.h>
#include<conio.h>

void main(){
	
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	
	printf("Age is : %d",age);
	
	if(age >= 18){
		printf("\nAge is allow");
	}
	else{
		printf("\nAge is not allow");
	}
	
	
	getch();
}
