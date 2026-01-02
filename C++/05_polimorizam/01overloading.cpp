// polimo : overload 
// 
// 1) method overloading : compile error 
// 2) method overriding : runtime error

/*
	method overloading : one only class inside function name same but defferent parameter
 */
 
#include<iostream>
using namespace std;

class OverLoad{
 	public:
 		void display(){
			cout<<"\nDisplay function 1";
		}
		void display(int x){
			cout<<"\nDisplay function 2 ";
		}
		void display(int x,int y){
			cout<<"\nDisplay Function 3";
		}
 };

int main()
{
	OverLoad obj;
	obj.display();
	obj.display(10);
	obj.display();
	
	return 0;
}
