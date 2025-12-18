/*

	      *
	    * *
	  * * *
	* * * *
  * * * * *
  1
  2 3
  4 5 6
  7 8 9 10
  
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k;
	
	for(i=0;i<=5;i++){	
		
		//	space
		for(k=0;k<=4-i;k++){
			printf(" ");
		}
		
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
			
	}
	
	return 0;
}
