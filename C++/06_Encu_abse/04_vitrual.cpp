#include<iostream>
using namespace std;

class Base{
	public:
		virtual void show()= 0;
};

class Child : public Base{
	public:
		void show(){
			cout<<"\nHellol this Show Function";
		}
		void Display(){
			cout<<"\nhello this Display..";
		}
};

int main()
{
	
	Child b;
	b.show();
	b.show();
	
	return 0;
}
