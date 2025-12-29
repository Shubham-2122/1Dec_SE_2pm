#include<iostream>
using namespace std;

int sum(int x,int y){
	int sum;
	sum = x + y;
	cout<<"\nSum : "<<sum;
}

int main()
{
	sum(40,30);
	sum(50,30);
	return 0;
}
