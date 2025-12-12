/*
	inc 
	preinc ++value
	postin value++
	
*/

#include<stdio.h>
#include<conio.h>

void main(){
	
	int a = 10;
	printf("a : %d",a);//10
	a++;
	printf("\na : %d",a);//11
	++a;
	printf("\na : %d",a);//12
	printf("\na : %d",a++); //12 --> 13
	printf("\na : %d",a);//13
	printf("\na : %d",++a);//14
	
	printf("\na : %d",++a);//15
	printf("\na : %d",++a);//16
	printf("\na : %d",a++);//16 // 17
	printf("\na : %d",++a);//18
	printf("\na : %d",a++);//19
	printf("\na : %d",a++);//20
	printf("\na : %d",++a);//21
	printf("\na : %d",a++);//22
	printf("\na : %d",a);
	
	
	printf("\na : %d",a--);
	printf("\na : %d",--a);
	
	
	
	
	getch();
}
