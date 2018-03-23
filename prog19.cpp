#include<iostream>
using namespace std;
//p19 March 17, 2018
int main(){
	int G;
	cout<<"Enter a score: ";
	cin>>G;
	if (G>= 90)
		cout<<"Your grade is an A"<<endl;
	else if((80<=G)&&(G<90))
		cout<<"Your grade is a B\n";
	else if((70<=G)&&(G<80))
		cout<<"Your grade is a C"<<endl;
	else if((60<=G)&&(G<70))
		cout<<"Your grade is a D"<<endl;
	else
		cout<<"You got an F, sorry :("<<endl;
	return 0;
}
