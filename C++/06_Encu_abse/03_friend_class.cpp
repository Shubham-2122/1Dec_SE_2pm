// friend class : private
#include<iostream>
using namespace std;

class Shubham{
	private:
		int money = 500;
	public:
		friend class Parth;
};

class Parth : public Shubham{
	public:
		void Display(Shubham s){
			cout<<"Parth your money : "<<s.money;
		}
};

int main()
{
	Shubham s1;
	Parth p;

	p.Display(s1);	

	return 0;
} 
