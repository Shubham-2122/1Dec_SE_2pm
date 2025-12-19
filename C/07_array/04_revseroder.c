#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a[5],i;
	
//	user data printed
	for(i=0;i<=4;i++){
		printf("Enter your num of Element : ");
		scanf("%d",&a[i]);
	}	
	
	printf("\nresver order ...");
	for(i=4;i>=0;i--){
		printf("\na[%d] : %d",i,a[i]);
	}
		
	getch();
}
