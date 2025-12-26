#include<iostream>
using namespace std;

int main()
{
	
	int a,b,c;
	
	cout<<"Enter your a : ";
	cin>>a;
	cout<<"Enter your b : ";
	cin>>b;
	cout<<"Enter your c : ";
	cin>>c;
	
	
	if(a>b && a>c){
		cout<<"\nA is max : "<<a;
	}
	else if(b>a && b>c){
		cout<<"\nB is Max : "<<b;
	}
	else{
		cout<<"\nC is Max : "<<c;
	}
	
	return 0;
}
