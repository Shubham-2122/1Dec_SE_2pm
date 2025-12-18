// 5+4+3+2+1 = 15
#include<stdio.h>
#include<conio.h>

int fact(int n){
	int sum = 1,i;
	for(i=1;i<=n;i++){
		sum = sum * i;
	}
	return sum;
}

void main()
{
	
	int num;
	printf("Enter your number : ");
	scanf("%d",&num);
	
	printf("num : %d",num);
	printf("\ntotal of fact %d",fact(num));
	
	getch();
}
