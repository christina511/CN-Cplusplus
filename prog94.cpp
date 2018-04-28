#include<iostream>
#include<cmath>
using namespace std;
//prog 94
//write a program that has two functions square and cube to return the square and the cube of an integer
//using int square(int) & int cube(int)
//April 28,2018
int square(int x){
	return x*x;
}
int cube(int x){
	return x*x*x;
}
int main(){
	int a;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"The square of "<<a<<" is "<<square(a)<<endl;
	cout<<"The cube of "<<a<<" is "<<cube(a)<<endl;
	system("pause");
}
