// friend function : private
#include<iostream>
using namespace std;

class Shubham{
	private:
		int money = 500;
	public:
		friend void Parth(Shubham s);
};

void Parth(Shubham s){
	cout<<"Parth your money : "<<s.money;
}

int main()
{
	Shubham s1;
	Parth(s1);
	return 0;
} 
