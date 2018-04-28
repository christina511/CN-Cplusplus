#include<iostream>
//p85 is to make a function that returns the sum of two numbers
//April 21, 2018
using namespace std;
void sum();
float a,b,c;
int main(){
	cout<<"please enter 2 numbers: ";
	cin>>a>>b;
	sum();
	return 0;
}
void sum(){
	c=a+b;
	cout<<"The sum of the 2 numbers is "<<c<<endl;
}

