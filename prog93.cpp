#include<iostream>
#include<cmath>
using namespace std;
//prog 93
//write a program that has two functions square and cube to return the square and the cube of an integer
//using void square(int) & void cube(int)
//April 28,2018
void square(int x){
	cout<<" the square of "<<x<<" is "<<x*x<<endl;
}
void cube(int x){
	cout<<" the cube of "<<x<<" is "<<x*x*x<<endl;
}
int main(){
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	square(a);
	cube(a);
	system("pause");
}
/*
this is the way i did it.

void square(int &x){
	x= pow(x,2);
}
void cube(int&y){
	y= pow(y,2);
}

int main(){
	int a;
	cout<<"Enter an integer: ";
	cin>>a;
	square(a);
	cout<<"the square of a= "<<a<<endl;
	cube(a);
	cout<<"the cube of a= "<<a<<endl;
	system("pause");
}*/
