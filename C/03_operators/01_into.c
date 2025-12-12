/* 
	oprators
	1) assigement (=)
	2) artimatic (+,-,/,%)
	3) restional op (>,<,>=,<=,==,!=)
	4) logical 
	
		&&
			T T = T 
			T F = F
			F T = F
			F F = F
		||
			T T = T
			T F = T
			F T = T
			F F = F
		!
			!(true) = false
			!(false) = true
	5) inc++/dec--
	
	6) trnery op : 
	(codition) ? 'true' : 'false'
	
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	printf("Enter your a : ");
	scanf("%d",&a);
	printf("Enter your b : ");
	scanf("%d",&b);
	
//	int a = 10 assigement op

	int sum = a+b;
	printf("Sum : %d",sum);
	
	printf("\nsub : %d",a-b);
	printf("\nmul : %d",a*b);
	printf("\ndivi : %d",a/b);
	
	
	getch();
}
