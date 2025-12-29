#include<iostream>
using namespace std;

class Student{
	private:
//		data member
		int Rollno;
		string name1;
	
	public:
//		memeber function
		void getData(){
			cout<<"\nEnter your Roll no :";
			cin>>Rollno;
			cin.ignore();
			cout<<"\nEnter your name : ";
			getline(cin,name1);
		}
		void putData(){
			cout<<"\nyour Roll no : "<<Rollno;
			cout<<"\nYour Name : "<<name1;
		}
		
};

int main()
{
//	class in object
	Student s1;
	s1.getData();
	s1.putData();
	
	Student s2;
	s2.getData();
	s2.putData();	
	return 0;
}
