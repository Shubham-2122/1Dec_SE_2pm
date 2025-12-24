// struct : it's store a varibale ,managend
#include<stdio.h>
#include<conio.h>

struct Student{
 char name[50];
 int roll;
 float marks;
};

int main()
{
	struct Student s;
	
	printf("Enter your rollno : ");
	scanf("%d",&s.roll);
	
	printf("Enter your name : ");
	scanf("%s",&s.name);
	
	printf("Enter your marks : ");
	scanf("%f",&s.marks);
	
	printf("\n------Student Details-----");
	printf("\nroll no : %d",s.roll);
	printf("\nName : %s",s.name);
	printf("\nmarks : %.1f",s.marks);
	printf("\nSize: %lu bytes\n", sizeof(s));
	return 0;
}
