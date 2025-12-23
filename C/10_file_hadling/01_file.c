#include<stdio.h>
#include<conio.h>

int main()
{
	
	FILE *fp;
	
	fp = fopen("test.txt","w"); //write mode
	
//	file error
	if(fp == NULL){
		printf("Error file not write..\n");
		return 1;	
	}
	
	fprintf(fp,"hello new text file here");
	
	fclose(fp);
	
	printf("data successfully print..");
	
	return 0;
}
