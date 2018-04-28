#include<iostream>
using namespace std;
//prog 90
//sending parameter a by reference and b by value
//April 28,2018
void f(int &x, int y){
	x=88;
	y=99;
}
int main(){
	int a,b;
	a=22;
	b=33;
	cout<<"a= "<<a<<" b = "<<b<<endl;
	f(a,b);
	cout<<"a= "<<a<<" b= "<<b<<endl;
	system("pause");
}
