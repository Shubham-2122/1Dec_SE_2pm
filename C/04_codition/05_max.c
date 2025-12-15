#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("Enter your A : ");
	scanf("%d",&a);
	printf("Enter your B : ");
	scanf("%d",&b);
	printf("Enter your C : ");
	scanf("%d",&c);
	
//	80 100 110
	if(a>b){
		if(a>c){
			printf("A is max : %d",a);
		}
		else{
			printf("C is max : %d",c);
		}
	}
	else if(b>c){
		printf("B is max : %d",b);
	}
	else{
		printf("C is max : %d",c);
	}
		
	
	getch();
}
