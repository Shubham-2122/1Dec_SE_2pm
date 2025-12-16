/*
	for(assigement;codition;inc/dec){
		for(assigement;codition;inc/dec){
		...code;
		}
	}
	
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int r,c;
	
	for(r=1;r<=5;r++){
		for(c=1;c<=5;c++){
			printf("* ");
		}
		printf("\n");
	}
		
	return 0;
}

