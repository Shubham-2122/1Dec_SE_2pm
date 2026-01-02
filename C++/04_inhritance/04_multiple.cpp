#include<iostream>
using namespace std;


class A{
	public:
		void data(){
			cout<<"\nClass of A data..";
		}
};

class B{
	public:
		void data1(){
			cout<<"\nClass Of B data..";
		}
};

class C : public A,public B{
	public:
		void Data2(){
			cout<<"\nClass of C data...";
		}
};

int main()
{
	C obj;
	obj.data();
	obj.data1();
	obj.Data2();
	return 0;
}
