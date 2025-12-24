#include<stdio.h>
#include<conio.h>

int main()
{
	
	FILE *fp;
	char str[100];
	
	fp = fopen("data.txt","a"); //append mode 

	if(fp == NULL){
		printf("Error file not write..\n");
		return 1;	
	}
	
	fputs("\nhello this new line data",fp);
	

	
	fclose(fp);
	

	
	return 0;
}
