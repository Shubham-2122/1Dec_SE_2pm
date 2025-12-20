// 2d array : multi array
// int a[2][2] 

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2],i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter your elemet %d : row %d : col : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\na[%d][%d] : %d",i,j,a[i][j]);
		}
	}
	
	getch();
}
