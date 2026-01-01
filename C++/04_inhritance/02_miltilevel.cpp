/* 
	class A{
	}
	Class B : public A{
	}
	class C : public B{
	}
*/



#include<iostream>
using namespace std;

class A{
	int a;
	public:
		void putData(){
			cout<<"\nEnter your a : ";
			cin>>a;
		}
		
		void getData(){
			cout<<"A data : "<<a;
		}
};

class B : public A{
	int b;
	public:
		void putDataB(){
			cout<<"\nEnter your B : ";
			cin>>b;
		}
		
		void getDatab(){
			cout<<"B data : "<<b;
		}
};

class C : public B{
	int c;
	public : 
		void putDataC(){
			cout<<"\nEnter your C : ";
			cin>>c;
		}
		void getDataC(){
			cout<<"C data : "<<c;
		}
};

int main(){
	
	C obj1;
	obj1.putData();
	obj1.getData();
	
	obj1.putDataC();
	obj1.getDataC();
	
	return 0;
}
