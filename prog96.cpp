#include<iostream>
using namespace std;
//Program 96 is computing the circumference and area of a circle
//Two functions
void computingArea(float &area, int r){
	const float pi = 3.141592;
	area = pi*r*r;
}
void computingCircumference(float &circumference, int r){
	const float pi = 3.141592;
	circumference = 2* pi*r;
}
	
int main(){
	float r1,a,c;
	cout<< "Enter radius"<< endl;
	cin >>r1;
	computingArea(a,r1);
	cout<<"Area = " << a<< endl;
	computingCircumference(c,r1);
	cout<<"Circumference = " << c<< endl;
	system("pause");
	return 0;
}
