#include<iostream>
using namespace std;

int main()
{
	
	string name1;
	int age = 21;
	
	cout<<"Enter your name : ";
//	cin>>name1;

	getline(cin,name1); //space count
	cout<<"your name : "<<name1;
	
//	printf("your name : %d",age," surname ");
	
	
	return 0;
}
