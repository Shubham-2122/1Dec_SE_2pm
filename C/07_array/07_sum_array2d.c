// 2d array : multi array
// int a[2][2] 

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2],i,j;
	int b[2][2],sum[2][2];
	
	printf("First array : \n");
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
	
	printf("\nsecond array : \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter your elemet %d : row %d : col : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nb[%d][%d] : %d",i,j,b[i][j]);
		}
	}
	
	printf("Sum 2d: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nsum[%d][%d] : %d",i,j,sum[i][j]);
		}
	}
	
	getch();
}
