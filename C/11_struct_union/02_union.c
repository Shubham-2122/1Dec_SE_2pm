// union : store address 

#include<stdio.h>
#include<conio.h>

union Student{
	char name[50];
	int roll;
	float marks;
};

int main()
{
	union Student s;
	
	printf("Enter your Roll no : ");
	scanf("%d",&s.roll);
	
	printf("Enter your Name : ");
	scanf("%s",&s.name);
	
	printf("Enter your marks : ");
	scanf("%f",&s.marks);
	
	printf("-----Student Details----");
	printf("\nRoll no : %d",s.roll);
	printf("\nyour name : %s",s.name);
	printf("\nyour marks : %.1f",s.marks);
	printf("\nSize: %lu bytes\n", sizeof(s));
	return 0;
}
