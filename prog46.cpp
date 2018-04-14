#include<iostream>
using namespace std;
//p46 is to print the sum of numbers between 19 to 31 (p29) using FOR loop
//April 14,2018
int main(){
	int w,sum;
	sum = 0;
	for(w=19;w<=31;w++)
		sum = sum+w;
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
