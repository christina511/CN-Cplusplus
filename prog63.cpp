#include<iostream>
using namespace std;
//p63 is to print the sum of numbers between 19 to 31 (p29) using DO WHILE loop
//April 14,2018
int main(){
	int w,sum;
	sum = 0;
	w=19;
	do{
		sum = sum+w;
		w++;
	}while(w<=31);
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
