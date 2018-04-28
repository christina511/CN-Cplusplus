#include<iostream>
//p84 is to make 3 functions
//April 21, 2018
using namespace std;
void myname();
void myaddress();
void collegeaddress();
int main(){
	cout<<"hello\n";
	myname();
	myaddress();
	collegeaddress();
	cout<<"bye\n";
	myname();
	return 0;
}
void myname(){
	cout<<"Christina Low\n";
}
void myaddress(){
	cout<<"123 Utopia Pkwy\n";
}
void collegeaddress(){
	cout<<"York College\n";
}
