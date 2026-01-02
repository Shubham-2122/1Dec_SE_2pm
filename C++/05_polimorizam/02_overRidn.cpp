/*
	method overring : Class defferent ,function name space overRiding
	
*/

#include<iostream>
using namespace std;


class Perent{
	public:
		void display(){
			cout<<"\nClass is perent data..";
		}
};

class Child : public Perent{
	public:
		void display(){
			cout<<"\nClass is Child data..";
		}
};

int main()
{
	Child data;
	
	data.display();
	
	data.Perent::display();
	
	data.display();
	
	return 0;
}
