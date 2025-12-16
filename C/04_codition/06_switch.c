/* switch(codtion){
 		case 1 :
		 	...code;
			 break;
		default:
			break;
			 	
 }
*/


#include<stdio.h>
#include<conio.h>

int main(){
	
	int data;
	
	printf("Enter your num Day (0-7) : ");
	scanf("%d",&data);
	
	printf("\nday of num : %d",data);
	
	switch(data){
		case 1:
			printf("\nmonday..");
			break;
		case 2:
			printf("\ntuseday..");
			break;
		case 3:
			printf("\nwensday.");
			break;
		default:
			printf("\ninvalid num of day..");
			break;
	}
	
	return 0;
}
