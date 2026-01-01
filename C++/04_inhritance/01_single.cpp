/* 
	class A {
	
	}

	class B : public A{
	
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

int main(){
	
	B obj;
	obj.putDataB();
	obj.getDatab();
	
	obj.putData();
	obj.getData();
	
	return 0;
}
