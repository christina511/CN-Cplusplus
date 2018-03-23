#include<iostream>
using namespace std;
//p18 is p17 using switch case March 17, 2018
int main(){
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	switch(a){
		case 3: cout<<"three\n";
				break;
		case 5: cout<<"five\n";
				break;
		case 7: cout<<"seven\n";
				break;
		default: cout<<"others\n";
				break; //optional
	}
	return 0;
}
