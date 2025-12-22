/* string : collection of multiple char value 
 A string is an array of characters stored in a consecutive memory
locations
	1 bit
	%s [10]
	
	Hello 
*/

#include<stdio.h>
#include<conio.h>

void main(){
	
	char data = 'a';
	
	printf("%c",data);
	
	
	char str[10] = "hello a";
	
	printf("\n%s",str);
	
	getch();
}

