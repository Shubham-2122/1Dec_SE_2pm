/* 
	public: global class outside class 
	private : same class inside use
	procted : class deffetern using inhritance
*/


#include<iostream>
using namespace std;


class Base{
	protected: 
//	private:
		int data = 20;
		
	public:
		void display()
		{
			cout<<"your data : "<<data;
		}
};
class Drive : public Base{
	public:
		void Hello(){
			cout<<"your data : "<<data;
		}
};


int main()
{
	Drive b1;
	b1.Hello();
		
	
	return 0;
}
