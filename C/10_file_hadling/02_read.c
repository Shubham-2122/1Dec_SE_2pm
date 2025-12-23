#include<stdio.h>
#include<conio.h>

int main()
{
	
	FILE *fp;
	char str[100];
	
	fp = fopen("data.txt","r"); //read mode
//	
//	file error
	if(fp == NULL){
		printf("Error file not write..\n");
		return 1;	
	}
	
	while(fgets(str,100,fp) != NULL){
		printf("%s",str);
	}
	
	fclose(fp);
	
//	printf("\ndata successfully print..");
	
	return 0;
}
