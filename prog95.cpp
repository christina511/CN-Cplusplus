#include<iostream>
using namespace std;
//Program 95 is computing the circumference and area of a circle
//This function is going to return more than one value
//because of the power of sending parameters by reference
void computingCircle(double &area, double&circumference,double r){
	const double pi = 3.141592;
	area = pi*r*r;
	circumference = 2* pi*r;
}
int main(){
	double r1,a,c;
	cout<< "Enter radius"<< endl;
	cin >>r1;
	computingCircle(a,c,r1);
	cout<<"Area = " << a
		<<" ,	 Circumference = "<< c<< endl;
	system("pause");
	return 0;
}
