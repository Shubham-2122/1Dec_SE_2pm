#include<iostream>
using namespace std;

int main()
{
	
	int a[5],i;
	for(i=0;i<5;i++){
		cout<<"Enter your element : ";
		cin>>a[i];
	}
	
	for(i=0;i<5;i++){
		cout<<"\na["<<i<<"] : "<<a[i];
//		printf("a[%d] : %d\n",i,a[i]);
	}
	
	
	return 0;
}
