#include<iostream>
using namespace std;
//p29 is to print the sum of numbers between 19 to 31
//March 24,2018
int main(){
	int w,sum;
	sum = 0;
	w=19;
	while(w<=31){
		sum = sum+w;
		w++;
	}
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
