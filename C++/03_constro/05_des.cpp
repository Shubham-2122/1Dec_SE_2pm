/*
	class inside have one constro
*/

#include<iostream>
#include<cstring>
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
//			parameter constor
			Student(int r,const char s[50]){
				roll = r;
				strcpy(name,s);
			}
			
//			copy constr :  exit constr refre
			Student(Student &sn){
				roll = sn.roll;
				strcpy(name,sn.name);
			}
			
			void display(){
				cout<<"\nyour Roll : "<<roll;
				cout<<"\nyour Name : "<<name;
			}
			~Student(){
				cout<<"\nHello data removed..";
			}
			
};

int main()
{
	Student s1;
	
	s1.display();
	
	Student s2(7,"sujal");
	s2.display();
	
	Student s3(s1);
	s3.display();
	
	return 0;
}
