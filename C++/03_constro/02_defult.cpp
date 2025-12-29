/*
	class inside have one constro
*/

#include<iostream>
using namespace std;

class Student{
	int roll;
	char name[50];
	
	public:
//		defualt constro
			Student(){
				cout<<"Enter your roll : ";
				cin>>roll;
				cout<<"Enter your Name : ";
				cin>>name;
			}
			
			void display(){
				cout<<"\nyour Roll : "<<roll;
				cout<<"\nyour Name : "<<name;
			}
			
};

int main()
{
	Student s1;
	
	s1.display();
	return 0;
}
