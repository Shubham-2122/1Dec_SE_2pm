#include<stdio.h>
#include<conio.h>

void main()
{
	
	int i;
//	
//	for(i=1;i<=10;i++){
//		if(i<=5){
//			printf("\ni : %d",i);
//		}
//	}

//	for(i=1;i<=10;i++){
//		if(i>=5){
//			printf("\ni : %d",i);
//		}
//	}
	
//	1 2 3 7 8 9 10

//	for(i=1;i<=10;i++){
//		if(i<=3 || i>=7){
//			printf("\ni : %d",i);
//		}
//	}
//	
	// 4 5 6 
	
	for(i=1;i<=10;i++){
		if(!(i<=3 || i>=7)){
			printf("\ni : %d",i);
		}
	}
	
	
	getch();
}
