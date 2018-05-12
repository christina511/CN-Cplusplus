#include<iostream>
using namespace std;
//May 12,2018
//p110 pointers
int main(){
	int a;
	a=5;
	int *ptr;
	ptr = &a;
	cout<<"a= "<<a<<endl;
	cout<<"Also a is "<<*ptr<<endl;
	cout<<"The address of a is "<<&a<<endl;
	cout<<"Also the address of a is "<<ptr<<endl;
}
