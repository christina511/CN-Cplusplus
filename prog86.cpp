#include<iostream>
//p86 is functions with parameters
using namespace std;
int sum(int,int);
int prod(int,int);
int main(){
	int a,b;
	cout<<"please enter two numbers: ";
	cin>>a>>b;
	cout<<"the sum of these numbers: "<<sum(a,b)<<endl;
	cout<<"the product of these numbers: "<<prod(a,b)<<endl;
	return 0;
}
int sum(int x, int y){
	int z;
	z= x+y;
	return z;
}
int prod(int x1, int x2){
	int c;
	c = x1 *x2;
	return c;
}
