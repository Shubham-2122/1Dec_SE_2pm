#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	
	char str[100],str1[100];
	int l1,x;
	
	
//	only one word store
	printf("Enter your string1 : ");
//	scanf("%s",&str);
	
	gets(str);
	
	printf("name : %s",str);
	
	l1 = strlen(str);
	printf("\nlength of number : %d",l1);
	
	printf("\nEnter your string2 :");
	gets(str1);
	
	printf("string2 : %s",str1);
	
//	strcat(str,str1);
//	printf("\napend data : %s",str);
	
	
	x = strcmp(str,str1);
	
	if(x == 0){
		printf("\nstring are compare..");
	}
	else{
		printf("\nstring are not compare..");
	}
	
	strupr(str);
	
	printf("\nupper case : %s",str);
	
	strlwr(str);
		printf("\nlower case : %s",str);
	
	getch();
}
