#include<iostream>
using namespace std;
//p30 is to print the sum of odd numbers between 20 and 40
//March 28, 2018
int main(){
	int w,sum;
	w=20;
	sum = 0;
	while(w<=40){
		if (w%2 !=0)
			sum = sum +w;
		w+=1;
		}
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
